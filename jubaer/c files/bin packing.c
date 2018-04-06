#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,k,l,ara[1000],b1,g1,c1,b2,g2,c2,b3,g3,c3,t;
    char ch[1000];
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9){
           char  str[10][100]={"BGC","BCG","GBC","GCB","CGB","CBG"};
    ara[0]=b2+b3+g1+g3+c2+c1;
   ara[1]=b2+b3+g2+g1+c1+c3;
     ara[2]=b1+b3+g2+g3+c2+c1;
     ara[3]=b1+b2+g2+g3+c1+c3;
     ara[4]=b2+b1+g1+g3+c2+c3;
     ara[5]=b3+b1+g1+g2+c2+c3;
   for(i=0;i<5;i++){
    for(j=i+1;j<6;j++){
        if(ara[i]>ara[j]){
            t=ara[i];
            ara[i]=ara[j];
            ara[j]=t;
            strcpy(ch,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],ch);
        }
        else if(ara[i]==ara[j]&&strcmp(str[i],str[j])>0){
             strcpy(ch,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],ch);
        }
    }
   }
   printf("%s %d\n",str[0],ara[0]);

    }
    return 0;
}
