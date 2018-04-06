#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,k,l,m,n,t;
   int ara[6],pz[6];
   char s[1000];
   pz[0]=1,pz[1]=3,pz[2]=2,pz[3]=1,pz[4]=1,pz[5]=1;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%s",s);
       l=strlen(s);
       for(i=0;i<6;i++)
        ara[i]=0;
       for(i=0;i<l;i++)
       {
           if(s[i]=='M')
                ara[0]++;
            else if(s[i]=='A')
                ara[1]++;
            else if(s[i]=='R')
                ara[2]++;
            else if(s[i]=='G')
                ara[3]++;
            else if(s[i]=='I')
                ara[4]++;
            else if(s[i]=='T')
                ara[5]++;
       }
       m=ara[0]/pz[0];
       for(i=0;i<6;i++)
       {
           k=ara[i]/pz[i];
           if(m>k)
            m=k;
       }
       printf("%d\n",m);
   }
   return 0;
}

