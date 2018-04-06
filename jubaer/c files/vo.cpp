#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
    int maxCount, passwordLength, end;
    string text, temp;
    string maxPass;
    int *p;
    map<string, int>mp;

    while(cin>>passwordLength>>text)
    {
        mp.clear();
        maxCount = -1;
        end = text.length() - passwordLength+1;
        for(int i=0; i<end; i++)
        {
            temp = text.substr(i, passwordLength);
            p = &mp[temp];
            (*p)++;
            if(*p > maxCount)
            {
                maxCount = *p;
                maxPass = temp;
            }
        }
        printf("%s\n", maxPass.c_str());
    }

}
