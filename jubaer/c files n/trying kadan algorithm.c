#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else return b;


}

int main()
{
    int current,maxval=0,i=0,j,k,l,ara[100],n;
    scanf("%d",&n);
    while(1){
        scanf("%d",&ara[i]);
        i++;
        if(i>=n)break;
    }
    current=0;

    for(i=0;i<n;i++){
        current=max(ara[i],current+ara[i]);
        maxval=max(maxval,current);
      //  printf("%d %d\n",current,maxval);
    }
   printf("%d\n",maxval);
}
