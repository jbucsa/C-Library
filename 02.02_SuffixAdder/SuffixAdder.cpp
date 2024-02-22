#include <iostream>
#include<string>
using namespace std;

void suffix (int n, string & suff);


int main()
{
	string s;
	int x;
	
	cout << "Enter a number to find the ordinal suffix for ";
	cin >> x;
	suffix(x,s);
}

void suffix (int n, string & suff)
{
	if(n%100 == 11 || n%100 == 12 || n%100 == 13)
    {
		cout << "suffix is: " << n << "th";
		cout << endl;
    }
    
		else if(n%10 == 1)
		{
			cout << "Suffix is: " << n << "st";
			cout << endl;
		}
		else
		{
			if(n%10 == 2)
			{
				cout << "Suffix is: " << n << "nd";
				cout << endl;
			}
			else
			{
				if(n%10 == 3)
				{
					cout << "Suffix is: " << n << "rd";
					cout << endl;
				}
				else
				{
					//if(n%100 == 4 || n%100 == 5 || n%100 == 6 || n%100 == 7 || n%100 == 8 || n%100 == 9 || n%100 == 0)
					{
						cout << "Suffix is: " << n << "th";
						cout << endl;
					}
				}
			}
		}
    
}
