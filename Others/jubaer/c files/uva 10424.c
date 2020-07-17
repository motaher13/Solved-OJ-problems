#include<stdio.h>
#include <string.h>
int main()
{
    int i,j,k=0,r,sum1=0,l=0,sum2=0,t;
    float d;
    char str1[1000],str2[1000],ch='%';
    while(gets(str1)){
            gets(str2);
    k=0,sum1=0,sum2=0,l=0;
    for(i=0;i<strlen(str1);i++){
    if((int)str1[i]>=65&&(int)str1[i]<=90||(int)str1[i]>=97&&(int)str1[i]<=122){
    if((int)str1[i]>=65&&(int)str1[i]<=90)r=(int)str1[i]-64;
    else r=(int)str1[i]-96;
    sum1=sum1+r;
    }
    }
    while(1){
        r=sum1%10;
        sum1=sum1/10;
        k=k+r;
        if(sum1==0&&k>9){
            sum1=k;
            k=0;
        }
        else if(sum1==0){
            break;
        }
    }
 for(i=0;i<strlen(str2);i++){
    if((int)str2[i]>=65&&(int)str2[i]<=90||(int)str2[i]>=97&&(int)str2[i]<=122){
    if((int)str2[i]>=65&&(int)str2[i]<=90)r=(int)str2[i]-64;
    else r=(int)str2[i]-96;
    sum2=sum2+r;
    }
    }

    while(1){
        r=sum2%10;

        sum2=sum2/10;
        l=l+r;
        if(sum2==0&&l>9){
            sum2=l;
            l=0;
        }
        else if(sum2==0){
            break;
        }
    }
    if(k>l){
        t=l;
        l=k;
        k=t;
    }
    d=(float)k/l;
    printf("%.2f %c\n",d*100,ch);
    }

   return 0;
}
