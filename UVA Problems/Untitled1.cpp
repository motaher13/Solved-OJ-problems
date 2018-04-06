#include<bits/stdc++.h>
using namespace std;
double ara[200];
int main()
{
    int i,j,k,l,m,n,t;
    string s;
    ara['W']=1;
    ara['H']=1/2;
    ara['Q']=1/4;
    ara['E']=1/8;
    ara['S']=1/16;
    ara['T']=1/32;
    ara['X']=1/64;

    double c;
    while(cin>>s)
    {
        //printf("%lf\n",ara[87]);
        if(s[0]=='*') break;
        j=1,k=0;
       l=s.size();
       for(i=j;i<l;i++)
       {
           c=0;
           for(j=i;;j++)
           {
               if(s[j]=='/') break;
               printf("%c ",s[j]);
               printf("%lf\n",ara[s[j]]);
                c=c+ara[s[j]];
                 printf("c=%lf %d\n",c,j);
           }
           j++;

           if(c==1) k++;

       }
       printf("%d\n",k);
    }
    return 0;
}
