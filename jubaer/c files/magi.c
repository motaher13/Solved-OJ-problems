#include<stdio.h>
#include<stdlib.h>
#define N 10000
main()
{
   int n,z,i,l,k,m,b[N];
   char ch,c[50],d[N][20];
   scanf("%d",&n);
   scanf("%c",&ch);
   for(z=0;z<n;z++)
   {
      k=0;
      while(1)
      {
         m=0;
         while(1)
         {
            scanf("%c",&ch);
            if(ch=='\n' && k) break;
            if(ch==' ') break;
            if(ch!='\n' && ch!=' ')c[m++]=ch;
         }
         c[m]=0;
         b[k++]=atoi(c);
         if(ch=='\n') break;
      }
      for(i=0;i<k;i++)
         scanf("%s",d[i]);
      l=1;
      for(m=0;m<k;m++)
      {
         for(i=0;i<k;i++)
            if(b[i]==l)
            {
               printf("%s\n",d[i]);
               l++;
               break;
            }
      }
      if(z!=(n-1)) printf("\n");
   }
   return 0;
}
