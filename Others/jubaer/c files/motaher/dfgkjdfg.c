\
#include <stdio.h>



int main()
{
    int ara[10000],ara2[10000],k,i,j,l,m,n,cou,g,ck;


    g=0;
     while(1){
            i=0;
     cou=0;
     ck=1;
     while(1){
     scanf("%d",&k);
     ck=1;
    for(l=0;l<i;l++){
        if(ara[l]==k){
                ck=0;
                break;
        }
    }
    if(ck==1){
     ara[i]=k;
     i++;
     }
     if(getchar()=='\n')break;
     }
   for(k=0;k<i;k++)printf("%d ",ara[k]);
   printf("%d\n",i);
  j=0;

   while(1){
       scanf("%d",&k);
       ck=1;
    for(l=0;l<j;l++){

        if(ara[l]==k)ck=0;
    }
    if(ck==1){
     ara[j]=k;
     j++;
     }
     if(getchar()=='\n')break;
     }
 for(k=0;k<j;k++)printf("%d ",ara2[k]);
   printf("j=%d\n",j);

     if(i>j){
            cou=0;
        for(l=0;l<j;l++){
            for(k=0;k<i;k++){
                if(ara2[l]==ara[k])cou++;
            }
        }

    if(cou==j)printf("B is a proper subset of A");
    else if(cou==0)printf("A and B are disjoint");
    else if(cou<j)printf("I'm confused!");
     }

     if(i<j){
            cou=0;
          for(l=0;l<i;l++){
            for(k=0;k<j;k++){
                if(ara2[k]==ara[l])cou++;
            }
        }

    if(cou==i)printf("A is a proper subset of B %d %d %d",cou,i,j);
     else if(cou==0)printf("A and B are disjoint");
    else if(cou<i)printf("I'm confused!");
     }

    if(i==j){
            cou=0;
           for(l=0;l<i;l++){
            for(k=0;k<j;k++){
                if(ara2[k]==ara[l])cou++;
            }
        }

    if(cou==i)printf("A equals B");
    else if(cou==0)printf("A and B are disjoint");
    else if(cou<i)printf("I'm confused!");

    }
    printf("\n");
     g++;
     i=0;
     j=0;
     }
}
