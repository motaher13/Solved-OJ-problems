#include <stdio.h>
int ara2[2000000],ara[2000000];
int main()
{
    int a,b,c,i,j,k,t,s,r,max,last,u,w,n,mo;
    scanf("%d%d",&n,&mo);
    last=n;
    for(i=1;i<=n;i++){
    scanf("%d",&ara2[i]);
    ara[i]=ara2[i]%mo;
   // printf("%d  %d\n",ara[i],ara2[i]);
    }
   //  for(i=1;i<=n;i++){
    //printf("%d ",ara[i]);
     //}
     printf("\n");
    //b=0;
    for(u=n;u>=1;u--){
  // int ara[1000]={4,2,9,-1,5,5,3,7,4,8,2,9,1,3};
    for(i=last/2;i>=1;i--){
       // printf("%d  ",i);
    j=i;
    t=j*2;
    s=j*2+1;
    if(s>last)max=t;
    else if(ara[t]>ara[s])max=t;
     else max=s;
      printf("%d %d %d :%d %d\n",ara[j],ara[max],max,ara2[j],ara2[max]);
     if(ara[j]==ara[max]){
        if(ara2[j]%2==0&&ara2[max]%2==0){
            if(ara2[j]>ara2[max]){
                c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;
            }
            else if(ara2[j]%2!=0&&ara2[max]%2!=0){
                 if(ara2[j]<ara2[max]){
                c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;
            }
            }
            else if(ara2[j]%2==0&&ara2[max]%2!=0){
                  c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;

            }
        }
     }
    printf("%d %d %d :%d %d\n",ara[j],ara[max],max,ara2[j],ara2[max]);
    while(ara[j]<ara[max]&&max<=last&&j>0){
         // if(ara[t]<ara[s])max=t;
          //else max=s;
            if(ara[max]>ara[j]){
                r=ara[max];
                ara[max]=ara[j];
                ara[j]=r;
                 c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;
            }
                if(ara[max]<ara[max*2]||ara[max]<ara[(max*2)+1]){
                    j=max;
                    t=max*2;
                    s=(max*2)+1;
                }
            //}
            else{
                    j=j/2;
    t=j*2;
    s=j*2+1;
            }
            if(s>last)max=t;
     else if(ara[t]>ara[s])max=t;
          else max=s;
   // printf("%d: ",b);
    b++;
    for(k=1;k<=n;k++)printf("%d %d   ",ara[k],ara2[k]);
    printf("\n");
   // j=j/2;
    }

    }
    printf("heap :\n");
   for(i=1;i<=n;i++)printf("%d  %d ",ara[i],ara2[i]);
   printf("\n");
   w=ara[last];
   ara[last]=ara[1];
   ara[1]=w;
   last=last-1;
}
for(i=1;i<=n;i++)printf("%d  %d\n ",ara[i],ara2[i]);

}

