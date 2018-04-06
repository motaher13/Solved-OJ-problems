#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,b=0;
    scanf("%d",&n);
    int c=0;
    if(n%400==0 || (n%4==0 && n%100!=0))
        b=1;
    for(i=n;;i++)
    {
        if(i%400==0 || (i%4==0 && i%100!=0))
            c+=2;
        else
            c++;
        //printf("%d %d\n",i,c);
        int d=0;
        if((i+1)%400==0 || ((i+1)%4==0 && (i+1)%100!=0))
            d=1;
        if(d==1 && b==1 && c%7==0)
            break;
        else if(d==0 && b==0 && c%7==0)
            break;

    }
    printf("%d\n",i+1);
    return 0;
}
