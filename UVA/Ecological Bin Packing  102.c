#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n,b[4],g[4],c[4],s,ara[0];
    char str[10][10];
    strcpy(str[0],"BCG");
        strcpy(str[1],"BGC");
        strcpy(str[2],"CBG");
        strcpy(str[3],"CGB");
        strcpy(str[4],"GBC");
        strcpy(str[5],"GCB");
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])==9)
    {
        ara[0]=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];
        ara[1]=b[1]+b[2]+c[0]+c[1]+g[0]+g[2];
        ara[2]=b[2]+b[0]+c[1]+c[2]+g[0]+g[1];
        ara[3]=b[0]+b[1]+c[1]+c[2]+g[0]+g[2];
        ara[4]=b[2]+b[0]+c[1]+c[0]+g[1]+g[2];
        ara[5]=b[0]+b[1]+c[0]+c[2]+g[2]+g[1];

        s=ara[0],n=0;
        for(i=1;i<6;i++)
            if(ara[i]<s){
                s=ara[i];
                n=i;}

        printf("%s %d\n",str[n],s);
    }
}
