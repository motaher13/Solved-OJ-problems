#include <stdio.h>
#include <iostream>
int main()
{
    int x11,y11,x12,y12,x21,y21,y22,x22,ck=1,m,n;
    scanf("%d",&n);
    m=0;
    while(n--){
            ck=1;
    scanf("%d%d%d%d%d%d%d%d",&x11,&y11,&x12,&y12,&x21,&y21,&x22,&y22);
    if(x11<x21){
    if(x12<=x21){
   if(m==1)printf("\n");
    printf("No Overlap");
    ck=0;
    }
    }
    else if(x21<x11){
    if(x22<=x11){
    printf("No Overlap");
    ck=0;
    }
    }
     if(y11<y21&&ck==1){
    if(y12<=y21){
    printf("No Overlap");
    ck=0;
    }
    }
    else if(y21<y11&&ck==1){
    if(y22<=y11){
    printf("No Overlap");
    ck=0;
    }
    }
    if(ck==1){
    if(x21>=x11)printf("%d ",x21);
    else if(x11>=x21)printf("%d ",x11);
     if(y21>=y11)printf("%d ",y21);
    else if(y11>=y21)printf("%d ",y11);
     if(x12<=x22)printf("%d ",x12);
    else if(x22<=x12)printf("%d ",x22);
     if(y22<=y12)printf("%d",y22);
    else if(y12<=y22)printf("%d",y12);
    }
  printf("\n");
  m=1;
    }
return 0;
}
