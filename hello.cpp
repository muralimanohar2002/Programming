#include<iostream>
#include<string>
using namespace std;

int main()
{
    int j=0,flag=0;
    string a, b="hello";

    cin >> a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[j])
        {
            j++;
            flag++;
        }
        if (flag==5)
        {
            break;
        }

    }

    if(flag==5)
    {
        cout << "YES";
    }
    else
    {
        cout <<"NO";
    }
    
    return 0;
}