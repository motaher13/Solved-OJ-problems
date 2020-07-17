#include<bits/stdc++.h>
using namespace std;
int ara[1030];
int main()
{
    int i,j,k,l,m,n,t;
    ara[0]=0;
    for(i=1;i<1001;i++)
    {
        n=i;
        int c=0;
        while(n!=0)
        {
            if(n%2!=0)
                c++;
            n=n/2;
        }
        ara[i]=ara[i-1]+c;
    }
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n",ara[n]);}
    return 0;
}
