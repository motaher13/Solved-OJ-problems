#include <stdio.h>
#include <string.h>
#include <math.h>
int ara[1000],ara2[1000];
char str[10000],str2[10000];
int main()
{
int i,j,k,l,m,n,p,q,r,s,ck,fla,cou,u,mid,mi,flag,sum;

     gets(str);
     k=0;
    l=0;
    mi=0;
    flag=0;
    for(i=0;str[i];i++){
        if(str[i]!=' '){
        if(str[i]=='-')mi=1;
        else k=k*10+(int)str[i]-48;
        flag=1;
        }
        if((str[i]==' '||str[i+1]=='\0')&&flag==1){
            if(mi==1)ara[l]=-k;
            else ara[l]=k;
            l++;
            mi=0;
            k=0;
            flag=0;
        }
    }
       gets(str2);
     k=0;
    r=0;
    mi=0;
    flag=0;
    for(i=0;str2[i];i++){
        if(str2[i]!=' '){
        if(str2[i]=='-')mi=1;
        else k=k*10+(int)str2[i]-48;
        flag=1;
        }
        if((str2[i]==' '||str2[i+1]=='\0')&&flag==1){
            if(mi==1)ara2[r]=-k;
            else ara2[r]=k;
            r++;
            mi=0;
            k=0;
            flag=0;
        }
    }
    mi=l;
    for(i=0;i<r;i++){
        p=ara2[i];
        sum=0;
        for(flag=l-1,j=0;flag>=0;j++,flag--){
            s=pow(p,flag);

            q=ara[j]*s;
            sum=sum+q;
            printf("sum=%d q=%d s=%d\n",sum,q,s);
        }
        printf("%d ",sum);
    }

}
