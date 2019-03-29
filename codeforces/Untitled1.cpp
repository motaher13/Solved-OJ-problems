#include<bits/stdc++.h>
using namespace std;
string s;
map<int,int>mm;
int main()
{
    int i,j,k,l,m,n,p=0,q,sm=0,c=0;
    scanf("%d",&k);
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='1'){
            c++;
        mm[c]=i;}
        //printf("%d\n",mm[c]);
    }
    for(i=0;i<l;i++)
    {
        //printf("%d %d\n",mm[k],mm[k+1]);
        if(k+p+1<=c && k+p<=c)
        {
            sm+=mm[k+p+1]-mm[k+p];
            //printf("1 %d\n",sm);
        }

        else if(k+p+1>c && k+p<=c){
            sm+=l-mm[p+k];
            //printf("2 %d %d %d\n",p+k,mm[p+k],sm);
            }
        else
            break;
        if(s[i]=='1')
            p++;

    }
    printf("%d\n",sm);
    return 0;
}
