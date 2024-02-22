#include<iostream>

using namespace std;

void wordLetterCounter(int &numWords, int &numLetters, int letterCount[]);

int main()
{
	int numWords = 0, numLetters = 0;
	int letterCount[26]={0}; //each letter count init to 0
	
	cout<<"\n\nEnter statement and press enter : ";
	
	wordLetterCounter(numWords, numLetters, letterCount);
	
	cout<<"\n\nNumber of Words = "<<numWords<<" Number of Letters = "<<numLetters<<endl;
	cout<<"\nFrequency of letters as follows:"<<endl;
	for(int i = 0; i < 26; i++)
	{
		cout<<char('a'+i)<<" = "<<letterCount[i]<<endl;
	}
	
	return 0;
}

void wordLetterCounter(int &numWords, int &numLetters, int letterCount[])

{
	char c;
	char lastLetter=' ';
	while(cin.get(c))
	{
		if(c >= 'A' && c <= 'Z')
			c+=char(32);
		if(c >= 'a' && c <= 'z')
		{
			letterCount[c - 'a']++;
			numLetters++;
		}
		if(c == ' ' && lastLetter != ' ')
			numWords++;
		
		if(c == '\n')
		{
		if(numLetters)
			numWords++;
			break;
		}
		lastLetter = c;
	}
}