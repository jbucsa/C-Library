#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <ctype.h>
#include <fstream>      // std::ifstream
#include <math.h>       /* pow */

using namespace std;

int main(void)
{
    int num,num2,total_Series;
    
    cout<<"Please enter your two resistances:";
    cin>>num>>num2;
	cin.ignore(INT_MAX,'\n');
    
    cout<<"Thank you!!  You've entered "<< num <<" ohms and "<<num2 <<" ohms!   Calculating...\n";
    
    //calculate total resistance in series
    
    total_Series=num+num2;

    cout<<"\nDone.\n";
    
    cout<<"\nIf your resistors are placed in series, they'll total to "<< total_Series << " ohms.\n";
    
    float num_Parallel=((1/(float)num)+(1/(float)num2));
    
    num_Parallel=powf(num_Parallel, -1);
    
    cout<<"If they are placed in parallel, they'll total "<< num_Parallel<<" ohms.\n\n";
    cout<<"Endeavor to have a blossoming day!";


    return 0;
}

