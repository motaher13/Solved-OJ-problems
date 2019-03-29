#include <stdio.h>
int max(int a,int b){
if(a>b)return a;
else return b;
}

int main()
{
    int current,maxval=0,i=0,j,k,l,ara[100],n,q;
    scanf("%d",&n);
    while(1){
        scanf("%d",&ara[i]);
        i++;
        if(i>=n)break;
    }
    current=0;
    k=0;
    l=0;
    for(i=0;i<n;i++){
        //current=max(ara[i],current+ara[i]);
        if(ara[i]>current+ara[i]){
            k=i;
            current=ara[i];
        }
        else if(ara[i]<=current+ara[i]){
            current=ara[i]+current;
            l=i;
        }
     if(maxval<current){
        maxval=current;
        q=l;
     }
       printf("%d %d\n",current,maxval);
    }
   printf("%d %d %d %d\n",maxval,k,l,q);
}
