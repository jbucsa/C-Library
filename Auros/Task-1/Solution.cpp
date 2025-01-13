#include <vector>
#include <iostream>
#include <unordered_map>
#include <queue>
#include <unordered_set>

using namespace std;

int solution(vector<int> &T) {
    int N = T.size();
    if (N == 1) return 1; // If there's only one city, Jack can visit it.

    unordered_map<int, vector<int>> graph;

    // Construct adjacency list representation of the tree
    for (int i = 1; i < N; ++i) {
        graph[T[i]].push_back(i);
        graph[i].push_back(T[i]);
    }

    queue<pair<int, bool>> q;  // {city, has_used_ticket}
    unordered_set<int> visited; 
    
    q.push(make_pair(0, false));
    visited.insert(0);
    
    int max_cities = 0;

    while (!q.empty()) {
        pair<int, bool> current = q.front();  // Extract manually
        q.pop();
        int city = current.first;
        bool used_ticket = current.second;

        max_cities++; // Count the visited city

        for (int neighbor : graph[city]) {
            if (visited.find(neighbor) == visited.end()) {  // Not visited yet
                bool is_odd = (neighbor % 2 == 1);
                
                if (!is_odd || !used_ticket) { // Can visit if even OR first odd city
                    q.push(make_pair(neighbor, used_ticket || is_odd));
                    visited.insert(neighbor);
                }
            }
        }
    }

    return max_cities;  // Ensure the function always returns a value
}
