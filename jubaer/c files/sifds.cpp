#include <stdio.h>
#include <string.h>
 char str[100000],str2[100000];
int main()
{
   int ara2[20]={6,2,4,8,6,2,4,8,6,2};
   int ara3[20]={1,3,9,7,1,3,9,7,1,3};
   int ara4[20]={6,4,6,4,6,4,6,4,6,4};
   int ara7[20]={1,7,9,3,1,7,9,3,1,7};
   int ara8[20]={6,8,4,2,6,8,4,2,6,8};
   int ara9[20]={1,9,1,9,1,9,1,9,1,9};
   int i,j,k,l,n,m;
   while(scanf("%s%s",str,str2)){
        if(strcmp(str,"0")==0&&strcmp(str2,"0")==0)break;
        l=0;
        for(k=0;k<strlen(str2);k++){
            if(str2[k]!='0'){
                    l=1;
                    break;
            }
        }
        if(l==0){printf("1\n");
        continue;
        }
        k=strlen(str)-1;
   m=(int)str[k]-48;
   if(m==0)printf("0");
   else if(m==1)printf("1");
   else if(m==5)printf("5");
   else if(m==6)printf("6");
   else if(m==2||m==3||m==7||m==8){
        n=0;
        for(k=0;str2[k];k++){
            n=(n*10+str2[k]-'0')%4;
        }
    if(m==2)printf("%d",ara2[n]);
   else if(m==3)printf("%d",ara3[n]);
   else if(m==7)printf("%d",ara7[n]);
   else if(m==8)printf("%d",ara8[n]);
   }
   else if(m==9||m==4){
        n=0;
   for(k=0;str2[k];k++){
    n=(n*10+str2[k]-'0')%2;
   }
    if(m==9)printf("%d",ara9[n]);
   else if(m==4)printf("%d",ara4[n]);
   }
   else printf("0");
   printf("\n");
   }
   return 0;
}
