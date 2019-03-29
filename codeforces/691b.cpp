#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    string s;
    cin>>s;
    l=s.size();
    n=l;
    int b=0;
    for(i=0;i<l/2;i++)
    {
        if((s[i]=='A' && s[n-1-i]=='A')||(s[i]=='b' && s[n-1-i]=='d')||(s[i]=='d' && s[n-1-i]=='b')||(s[i]=='H' && s[n-1-i]=='H')||(s[i]=='I' && s[n-1-i]=='I')||(s[i]=='M' && s[n-1-i]=='M')||(s[i]=='O' && s[n-1-i]=='O')||(s[i]=='o' && s[n-1-i]=='o')||(s[i]=='p' && s[n-1-i]=='q')||(s[i]=='q' && s[n-1-i]=='p')||(s[i]=='T' && s[n-1-i]=='T')||(s[i]=='U' && s[n-1-i]=='U')||(s[i]=='V' && s[n-1-i]=='V')||(s[i]=='v' && s[n-1-i]=='v')||(s[i]=='W' && s[n-1-i]=='W')||(s[i]=='w' && s[n-1-i]=='w')||(s[i]=='X' && s[n-1-i]=='X')||(s[i]=='x' && s[n-1-i]=='x')||(s[i]=='Y' && s[n-1-i]=='Y'))
            continue;
        else
        {
            b=1;
            break;
        }
    }
    //printf("%d\n",b);
    if(b==0)
        if(l%2!=0)
    {
        i=l/2;
        if((s[i]=='A' && s[n-1-i]=='A')||(s[i]=='H' && s[n-1-i]=='H')||(s[i]=='I' && s[n-1-i]=='I')||(s[i]=='M' && s[n-1-i]=='M')||(s[i]=='O' && s[n-1-i]=='O')||(s[i]=='o' && s[n-1-i]=='o')||(s[i]=='T' && s[n-1-i]=='T')||(s[i]=='U' && s[n-1-i]=='U')||(s[i]=='V' && s[n-1-i]=='V')||(s[i]=='v' && s[n-1-i]=='v')||(s[i]=='W' && s[n-1-i]=='W')||(s[i]=='w' && s[n-1-i]=='w')||(s[i]=='X' && s[n-1-i]=='X')||(s[i]=='x' && s[n-1-i]=='x')||(s[i]=='Y' && s[n-1-i]=='Y'))
            m=1;
        else
            b=1;
    }
    if(b==0)
        printf("TAK\n");
    else
        printf("NIE\n");
    return 0;
}
