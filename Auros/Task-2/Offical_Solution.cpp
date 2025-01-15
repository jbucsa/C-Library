#include <vector>
#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int solution(vector<vector<int>>&A) {
        // Base Case
        int t = 0;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (A[i][j] == 0)
                    t++;
        if (t == 0)
            return 0;
        
        int ans = INT_MAX;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (A[i][j] == 0)
                {
                    for (int ni = 0; ni < 3; ++ni)
                    {
                        for (int nj = 0; nj < 3; ++nj)
                        {
                            int d = abs(ni - i) + abs(nj - j);
                            if (A[ni][nj] > 1)
                            {
                                A[ni][nj]--;
                                A[i][j]++;
                                ans = min(ans, d + solution(A));
                                A[ni][nj]++;
                                A[i][j]--;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }


int main()
{
   std::vector<std::vector<int>> test =  {{2, 0, 2}, {1, 0, 0}, {2, 1, 1}};
   std::cout << solution(test);
}