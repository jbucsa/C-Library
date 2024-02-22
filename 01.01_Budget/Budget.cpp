#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int RoundUp (int toRound);
void printGreeting();
void printGoodBye();
bool isUserDone();
void PercentRelation(float x);
int NextYearBudget(int spent);
int CalculateRatio(float num1, float num2);


int main(void)
{
    float num,num2;
    bool status=false;
    printGreeting();
    while (!status) {
        
    std::cout << "What was your budget allotment last year? ";cin>>num;

    cout<<fixed<<setprecision(2);

    cout << "Fine, and how much did you spend last year? ";
    cin>>num2;
    
    float percentage=CalculateRatio(num, num2);
    
    setprecision(0);
    cout << "\nLast year you used up about "<< static_cast<int>(percentage)<<"% of your budget.\n\n";
    PercentRelation(percentage);
    cout << "Your budget next year will be "<< static_cast<float>(NextYearBudget(num2))<<". \n\n";
    status=isUserDone();
}  
    printGoodBye();

    return 0;
}

void printGreeting()
{
    cout <<setw(65)<<right<<"Welcome to the Budget Projection Program!!!\n\n";
}

bool isUserDone()
{
    string input;
    cout<<"Are you Done? (y or n) ";cin>>input;

    if (input=="y") {
        return true;
    }
    else
        return false;    
}

void printGoodBye()
{
    cout<<"\nThank you for using the BPP!!\n\n";
    cout<<"Endeavor to have a fiscally fit day!\n\n";
}

int RoundUp(int toRound)
{
    return (100 - toRound % 100) + toRound;
}

int NextYearBudget(int spent)
{
    int value;
    return value=RoundUp((int)spent);
}

int CalculateRatio(float num1, float num2){
    float percentage=num2/num1;
    percentage*=100;
    return percentage;
}

void PercentRelation(float percentage)
{
    if (percentage > 100)
        cout<<"This overspending will bankrupt the company!\n";
    else if (percentage==50)
        cout<<"Way to keep your eye on the ball, Johnson!\n";
    else
        cout<<"Thanks to you, this company will be solvent for years to come!\n";
}
