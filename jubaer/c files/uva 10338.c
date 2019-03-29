#include <stdio.h>
 unsigned long long ara[1000000],ara2[1000000];
char str[1000000];
int main()
{
 unsigned long long a,b,c,d,sum,i,l,j,k,n,p,u,r;

    char ch;
    sum=1;
    for(i=1;i<=20;i++){
    sum=sum*i;
    ara[i]=sum;
    }
     scanf("%llu",&n);
     ch=getchar();
     r=1;
     while(n--){
     j=0;
     p=0;
    for(j=0;;j++){
        ch=getchar();
        if(ch=='\n')break;
        if(j==0){
                str[p]=ch;
                ara2[p]=1;
                p++;
        }
        else if(j>0){
                c=0;
            for(u=0;u<p;u++){
                if(str[u]==ch){
                    c=1;
                    ara2[u]++;
                    break;
                }
            }
           if(c==0){
            str[p]=ch;
            ara2[p]=1;
            p++;
           }
        }
    }
     k=j;
     for(i=1;i<=20;i++){
        if(i==k)b=ara[i];
     }
     for(a=0;a<p;a++){
      for(i=1;i<=20;i++){
        if(ara2[a]==i)b=b/ara[i];
      }

     }

     printf("Data set %llu: %llu\n",r,b);
     r++;
     }
     return 0;
}
