#include<bits/stdc++.h>
using namespace std;
string s;
map<char,int>mm;
int main()
{
    int i,j,k,l,m,n,c=0,d=0;
    scanf("%d",&n);
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(mm[s[i]]==0){
            mm[s[i]]=1;
            d++;}
        else
            c++;
    }
    if(c+d>26)
        printf("-1\n");
    else
    printf("%d\n",c);
    return 0;
}
