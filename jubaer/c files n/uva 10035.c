#include <stdio.h>
int main()
{
    unsigned long int a,b;
    int r,m,t,n,l;
   while(scanf("%lu%lu",&a,&b)){
        if(a==0&&b==0){
            break;
        }
        l=0;
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    n=0;
    while(a>0){
    r=a%10;
    if(n>9){
        r=r+1;
    }
    a=a/10;
    m=b%10;
    b=b/10;
    if(b==0){
        b=0;
    }
    n=m+r;
   if(n>9){
    l++;
    }
    }
    if(l==0){
        printf("No carry operation.\n");
    }
    else if(l==1){
    printf("%d carry operation.\n",l);
    }
    else printf("%d carry operations.\n",l);
   }

   return 0;
}
