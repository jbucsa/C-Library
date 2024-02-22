#include <iostream>

using namespace std;

int calculateMinute (int, int);
int calculateTime (int, int);
int min1 (int);
int min2 (int);
int hour2 (int);
int minute2 (int);
int totalminutes2 (int);

int main(min1, min2);
{	
    int totalminutes1 = 0;
    int totalminutes2 = 0;
    int hr1 = min1 = 0;
    int hr2 = min2 = 0;


    cout<<"Enter the first time: hr, min:"<<endl;
	cin>>hr1>>min1>>endl;

    cout<<"Enter the second time: hr, min:"<<endl;
	cin>>hr2>>min2>>endl;

    totalminutes1= calculateMinute (int hr1, int min1);
	totalminutes2= calculateMinute (int hr2, int min2);
	
	time= calculateTime (int totalminutes1, int totalminutes2);
	return 0;
}
	
void calculateMinute (int hour,int min)
{	
    hour= hr1 * 60;
	min= min1 * 1;
	totalminutes1= hour+min;
	hour2= hr2 * 60;
	minute2= min2 * 1;
	totalminutes2= hour2+minute2;

}
 
void calculateTime( totalminutes1, totalminutes2);
	time= totalminutes1 - totalminutes2
}
