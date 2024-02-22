#include<iostream>
#include<string>
#include<cctype>

using namespace std;
int main()

{
	string first, last, middle;
	char initial;
	
	cout<<"Enter your  name: ";
	cin>>first;
	
	first[0] = toupper(first[0]);
	
	cin>>last;
	last[0] = toupper(last[0]);
	
	if (cin.peek() == '\n')
	{
		// if there is no middle name
		}
	else
	{
		// if there was a middle name was read as last!
		
		middle = last;
		cin>>last;
		middle[0] = toupper(middle[0]);
		initial = middle[0];
	}
	
	cout<<"Your formal name would be: "<<last<<", "<<first;
	if (!middle.empty())
	{
		cout<<" " <<initial;
	}
	
	cout<<".\n";
	cout<<"Thanks for Formalizing with us today!\n"
	"Have a pompous day!\n";
	return 0;
}
	
