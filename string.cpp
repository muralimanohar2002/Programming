#include<iostream>
#include<string>
#include<ctype.h>
#include<vector>
using namespace std;

int main()
{
    string s;
    vector<char>v;

    cin >> s;

    cout<<"bruh chill";
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
        {
            continue;
        }
        else
        {
            if(isupper(s[i]))
            {
                v.push_back(tolower(s[i]));
            }
            else
            {
                v.push_back(s[i]);
            }
            
        }
        
    }
    for(int i=0;i<v.size();i++)
    {
        cout <<"."<<v[i];
    }

    return 0;
}