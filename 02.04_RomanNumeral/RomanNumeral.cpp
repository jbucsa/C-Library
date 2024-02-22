// Coded by Justin Bucsa
// Roman Numeral Converter
// Portfolio II

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

string toRoman(int n) {
	if (n <= 0) {throw out_of_range("Sorry, the Romans did not have a numeral for zero. Try again.");}
	string numeral;
	while (n >= 1000) {numeral += "M"; n -= 1000;}
	if (n >= 900) {numeral += "CM"; n -= 900;}
	if (n >= 500) {numeral += "D"; n -= 500;}
	if (n >= 400) {numeral += "CD"; n -= 400;}
	while (n >= 100) {numeral += "C"; n -= 100;}
	if (n >= 90) {numeral += "XC"; n -= 90;}
	if (n >= 50) {numeral += "L"; n -= 50;}
	if (n >= 40) {numeral += "XL"; n -= 40;}
	while (n >= 10) {numeral += "X"; n -= 10;}
	if (n >= 9) {numeral += "IX"; n -= 9;}
	if (n >= 5) {numeral += "V"; n -= 5;}
	if (n >= 4) {numeral += "IV"; n -= 4;}
	while (n >= 1) {numeral += "I"; n -= 1;}
	return numeral;
}

int main() {
	int n;
    char status[10];
    cout<<"Will you be converting numbers to Roman form with us today? ";cin>>status;
    if (strcmp(status, "yes")!=0) {
        cout<<"Goodbye\nThank you for using the RNP!!\nEndeavor to have a plebeian day!\n";
        return 0;
    }
    while (1) {
        if (strcmp(status, "yes")!=0) {
            break;
        }
        
        cout<<"\nExcellent!  Glad to have you along!\n\n";
        cout << "Enter a number to convert: ";
        cin >> n;
        if (n>0 && n<4000){
            printf("\nAh, I believe that would be %s, right?\n\n",toRoman(n).c_str());
            //cout << n << "  " << toRoman(n) << '\n';
        }
        else if (n==0) {
            cout<<"Oh, I'm sorry, that value is too small for Roman civilization.\n\n";
            
            cout<<"Please try again with a number [strictly] greater than 0, thank you...\n\n";
        }
        else
            cout << "Please try again with a number [strictly] less than 4000, thank you...\n";
        
        cout<<"Would you like to convert another number? ";
        cin>>status;
        
        
    }
    cout<<"\nThank you for using the RNP!!\n\nEndeavor to have a plebeian day!\n";
    return 0;
}
