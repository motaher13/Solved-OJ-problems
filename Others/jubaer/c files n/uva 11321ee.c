#include <stdio.h>
int ara2[2000000],ara[2000000];
int main()
{
    int a,b,c,i,j,k,t,s,r,max,last,u,w,n,mo,ck;
    scanf("%d%d",&n,&mo);
    last=n;
    b=0;
    for(i=1;i<=n;i++){
    scanf("%d",&ara2[i]);
    ara[i]=ara2[i]%mo;
   // printf("%d  %d\n",ara[i],ara2[i]);
    }
     for(i=1;i<=n;i++){
    printf("%d ",ara[i]);
     }
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
int ck=1;
      printf("%d %d %d\n %d %d\n",ara[j],ara[max],max,ara2[j],ara2[max]);
     if(ara[t]==ara[s]){
           ck=2;
    printf("ck=%d,\n",ck);
        if(ara2[t]%2==0&&ara2[s]%2==0){
            ck=0;
    printf("ck=%d,\n",ck);
            if(ara2[t]<ara2[s]&&s!=max){
                c=ara2[t];
                ara2[t]=ara2[s];
                ara2[s]=c;
            }
        }
            else if((ara2[t]%2!=0)&&(ara2[s]%2!=0)){
                      ck=7;
    printf("ck=%d,\n",ck);
                 if(ara2[t]>ara2[s]&&s!=max){
                c=ara2[t];
                ara2[t]=ara2[s];
                ara2[s]=c;
            }
            }
            else if(ara2[t]%2!=0&&ara2[s]%2==0){
                      ck=6;
    printf("ck=%d,\n",ck);
                  c=ara2[t];
                ara2[t]=ara2[s];
                ara2[s]=c;

            }

     }

     if(ara[j]==ara[max]){
           ck=2;
    printf("ck=%d,\n",ck);
        if(ara2[j]%2==0&&ara2[max]%2==0){
            ck=0;
    printf("ck=%d,\n",ck);
            if(ara2[j]<ara2[max]){
                c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;
            }
        }
            else if((ara2[j]%2!=0)&&(ara2[max]%2!=0)){
                      ck=7;
    printf("ck=%d,\n",ck);
                 if(ara2[j]>ara2[max]){
                c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;
            }
            }
            else if(ara2[j]%2!=0&&ara2[max]%2==0){
                      ck=6;
    printf("ck=%d,\n",ck);
                  c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;

            }

     }
    // else printf("%d ",ck);
    printf("%d %d %d \n%d %d\n",ara[j],ara[max],max,ara2[j],ara2[max]);
    while(ara[j]<ara[max]&&max<=last&&j>=1){
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
         // if(ara[t]==ara[s]){


           if(ara[j]==ara[max]){
           ck=2;
    printf("ck=%d,\n",ck);
        if(ara2[j]%2==0&&ara2[max]%2==0){
            ck=0;
    printf("ck=%d,\n",ck);
            if(ara2[j]<ara2[max]){
                c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;
            }
        }
            else if((ara2[j]%2!=0)&&(ara2[max]%2!=0)){

                 if(ara2[j]>ara2[max]){
                        ck=7;
    printf("ck=%d,\n",ck);
                c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;
            }
            }
            else if(ara2[j]%2!=0&&ara2[max]%2==0){
                      ck=6;
    printf("ck=%d,\n",ck);
                  c=ara2[j];
                ara2[j]=ara2[max];
                ara2[max]=c;

            }

     }


    printf("as:");

    for(k=1;k<=n;k++)printf("%d ",ara[k]);
    printf("\n");
     for(k=1;k<=n;k++)printf("%d ",ara2[k]);

   // j=j/2;
    }

    }
    printf("\nheap :\n");

   for(k=1;k<=last;k++)printf("%d ",ara[k]);
   printf("\n%d",i);
   printf("\n");
     for(k=1;k<=last;k++)printf("%d ",ara2[k]);
   b++;
   printf("\n");
   w=ara[last];
   ara[last]=ara[1];
   ara[1]=w;

    w=ara2[last];
   ara2[last]=ara2[1];
   ara2[1]=w;

   /*else if(ara[last]==ara[1]){
          // ck=2;
//    printf("ck=%d,\n",ck);
        if(ara2[1]%2==0&&ara2[last]%2==0){
            ck=0;
    printf("ck=%d,\n",ck);
            if(ara2[1]<ara2[last]){
                c=ara2[1];
                ara2[1]=ara2[last];
                ara2[last]=c;
            }
        }
            else if((ara2[1]%2!=0)&&(ara2[last]%2!=0)){

                 if(ara2[1]>ara2[last]){
                        ck=7;
    printf("ck=%d,\n",ck);
                c=ara2[1];
                ara2[1]=ara2[last];
                ara2[last]=c;
            }
            }
            else if(ara2[j]%2!=0&&ara2[max]%2==0){
                      ck=6;
    printf("ck=%d,\n",ck);
                  c=ara2[1];
                ara2[1]=ara2[last];
                ara2[last]=c;

            }


   }*/

   last=last-1;
}

for(i=1;i<=n;i++)printf("%d ",ara[i]);
printf("\n");
for(i=1;i<=n;i++)printf("%d ",ara2[i]);

}

