#include <stdio.h>
int main()
{
    int a,b,c,i,j,k,ara[10000],t,s,r,max;
    for(i=1;i<=10;i++){
    scanf("%d",&ara[i]);
    }
    b=0;
  // int ara[1000]={4,2,9,-1,5,5,3,7,4,8,2,9,1,3};
    for(i=5;i>=1;i--){
        printf("%d  ",i);
    j=i;
    t=j*2;
    s=j*2+1;
    if(s>10)max=t;
    else if(ara[t]>ara[s])max=t;
     else max=s;
    printf("%d %d\n",ara[max],max);
    while(ara[j]<ara[max]&&max<=10){
         // if(ara[t]<ara[s])max=t;
          //else max=s;
            if(ara[max]>ara[j]){
                r=ara[max];
                ara[max]=ara[j];
                ara[j]=r;
            }
                if(ara[max]<ara[max*2]||ara[max]<ara[(max*2)+1]){
                    j=max;
                    t=max*2;
                    s=(max*2)+1;
                }
            //}
            else{
                    j=j-1;
    t=j*2;
    s=j*2+1;
            }
            if(s>10)max=t;
     else if(ara[t]>ara[s])max=t;
          else max=s;
    printf("%d: ",b);
    b++;
    for(k=1;k<=10;k++)printf("%d ",ara[k]);
    printf("\n");
   // j=j/2;
    }

    }
   for(i=1;i<=10;i++)printf("%d ",ara[i]);
}

