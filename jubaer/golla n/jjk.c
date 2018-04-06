#include <stdio.h>


char str[4000],str2[4000],str3[4000],str4[4000],sum[5000][4000];
int main()
{


int i,j,k,l,m,q,a=0,b=1,u,n,max;
scanf("%s%s",str,str2);


max=strlen(str2);
    q=strlen(str2)-strlen(str);
    for(l=0;l<q;l++){
        str3[l]='0';

    }
    str3[l]='\0';
    m=0;
    strcat(str3,str);
  //  printf("%d\n%s\n",strlen(str3),str3);
    for(k=max-1,l=0;k>=0;k--,l++){
     m=m+((int)str2[k]-48)+((int)str3[k]-48);
     str4[l]=(char)(m%10)+'0';
     m=m/10;
    }
    if(m>0){
            str4[l++]=(char)m+'0';
    str4[l++]='\0';
    }
    else if(m==0)str4[l++]='\0';
    strcpy(str2,strrev(str4));
    printf("%s\n%s",str2,str4);
}
