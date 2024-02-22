#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;

int main()
{ 
	char parenthesis_1, comma, parenthesis_2;
	double x_1, x_2, y_1, y_2, midpoint_x, midpoint_y, distance;
	char position_1, position_2;
 
	cout << "\t\t\tWelcome to the 2D Point Program!!!\n\n";
	cout << "Where is your first point?";
	//cin >> position_1;
    cin >>ws;
	if ( !isdigit(cin.peek()) && cin.peek()!='+' && cin.peek()!='-' && cin.peek()!='.' )
	{
		cin >> parenthesis_1;
	}
	else
	{
		cout << "You forgot to insert opening parenthesis.\n";
	}
	cin >> x_1>>ws;
	if ( !isdigit(cin.peek()) && cin.peek()!='+' && cin.peek()!='-' && cin.peek()!='.')
	{
		cin >> comma;
	}
	else
	{
		cout << "You forgot to insert a comma.\n";
	}
	cin >> y_1;
	while(cin.peek() != '\n' && isspace(cin.peek()))
	{
		cin.ignore(INT_MAX,'\n');
	}
	if ( cin.peek()==')')
	{
		cin >> parenthesis_2;
	}
 
	cout << "\n";
	cout << "Where is your second point?";

	cin >> ws;//position_2;
 
		if ( !isdigit(cin.peek()) && cin.peek()!='+' && cin.peek()!='-' && cin.peek()!='.' )
		{
			cin >> parenthesis_1;
		} 
		else
		{
			cout << "You forgot to insert opening parenthesis.\n";
		}
		cin >> x_2 >> ws;
		if ( !isdigit(cin.peek()) && cin.peek()!='+' && cin.peek()!='-' && cin.peek()!='.')
		{
			cin >> comma;
		}
		else
		{
			cout << "You forgot to insert a comma.\n";
		}
	cin >> y_2;// >> ws;
	while(cin.peek() != '\n' && isspace(cin.peek()))
	{
		cin.ignore(INT_MAX,'\n');
	}
	if ( cin.peek()==')')
	{
		cin >> parenthesis_2;
	}
  
	distance = sqrt(pow(x_2*-x_1, 2) + pow((y_2*-y_1), 2));
		cout << "\n\nThank you!! Calculating... Done.\n\n";
		cout << position_1 << " is " << distance << "units away from " << position_2 << ".\n\n";
 
	midpoint_x = (x_1 + x_2)/2;
	midpoint_y = (y_1 + y_2)/2;
	cout << "The midpoint of the line segment from " << position_1 << " to\n";
	cout << position_2 << " is (" << midpoint_x << ", " << midpoint_y << ").\n\n";
	cout << "Thank you for using the 2PP!!\n\n";
	cout << "endeavor to have a day...";
	char letter;
	cin >> letter;
 
 return 0;
 }
 
