#include<iostream>   
#include<string>
#include<vector>

using namespace std;
bool is_vowel(string c);
bool is_vowel_char(char c);
short check_for_const(string a);
string translate(string & a);
short check_for_vowel(string a);
string remove_period(string & a);
bool ispunct (char punct);

int main(void)
{
	char punct;
    cout << "\n\n\t\tWelcome to English to Pig Lating Convertion Program!";
    vector<string> phrase;
    cout << "\n\nEnter your phrase in English (end with a period): ";
    bool more = true;
    do
    {
        string word;
        cin >> word;
        phrase.push_back(word);
        if( word[word.length()-1] == '.')
        {
            more = false;
        }
    } while(more);
    
    for( vector<short>::size_type i = 0; i <= ( phrase.size() - 1 ); i++)
    {
		if (ispunct(phrase[i][phrase[i].length()-1]))
		{
			punct = phrase[i][phrase[i].length()-1];
		    phrase[i].erase(phrase[i].length()-1,1);
		}
		else
		{
			punct = '\0';
		}

        if( is_vowel( phrase[i] ) ) 
        {
            phrase[i] += "yay";
        }
        else
        {
            phrase[i] = translate(phrase[i]);
        }
		if (punct != '\0')
		{
		    phrase[i] += punct;
		}
    }
	
    for( vector<short>::size_type phrase_pos = 0; phrase_pos != (phrase.size() - 1); phrase_pos++)
    {
//		phrase= phrase+ phrase[i]:
        cout << phrase[phrase_pos] << ' ';
    }
    cout << phrase.back();
   
	return 0;
}

bool is_vowel(string c)
{
    char b = tolower(c[0]);
    return b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u';
}

bool is_vowel_char(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

short check_for_const(string a)
{
    short pos;
    for( vector<short>::size_type i = 0; i <= a.size() - 1; i++)
    {
        if( !is_vowel_char( a[i] ))
        {
            pos = i;
        }
    }
    return pos;
}

short check_for_vowel(string a)
{
    short pos;
    for( vector<short>::size_type i = 0; i <= a.size() - 1; i++)
    {
        if( is_vowel_char( a[i] ))
        {
            pos = i;
            i = a.size();
        }
    }
    return pos;
}
bool ispunct (char punct)
					 {
					switch (punct){
					case '.':case',':case'!': case'?':case';':
					return true;
					 default:
					return false;}
					 }
					 
string translate(string & a)
{
    string b;
    string c;
    short vowel_pos = check_for_vowel(a);
    b = a.substr(0, vowel_pos-1);
    a = a.substr( vowel_pos, a.size() - 1);
    
    c = b + a + "ay";
    
    return c;
}
