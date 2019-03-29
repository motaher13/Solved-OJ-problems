#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,t,n,d,y,f,c,e;
    int mo[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    char *we[7]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&f,&m,&y);
        d=y-1990;
        j=(d+1)/4;
        c=0;
        c=3+d+j;
        e=0;
        for(i=1;i<m;i++)
            e+=mo[i];
        if((d+2)%4==0 && m>2)
            e++;
        e+=f;
        e=e+c-1;
//        printf("%d %d \n",e,c);
        e=e%7;
        printf("%s\n",we[e]);


    }
}
