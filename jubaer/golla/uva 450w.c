#include <stdio.h>
#include <string.h>
char str[5000],str2[5000],str3[5000],sum[5050][5000],str4[5000];
int main()
{
    int i,j,k,l,m,q,u,a=0,b=1,w,h,n;
    u=2;
   while(u!=5001){
        if(u==2){
            sprintf(str2,"%d",b);
             sprintf(str,"%d",a);
        }
        else{
            strcpy(str,str2);
                h=0;
            for(w=j-1;w>=0;w--){
                str2[h]=str4[w];
                h++;
            }
        }
    k=strlen(str2);
    l=strlen(str);
    q=k-l;
    for(i=0;i<q;i++){
    str3[i]='0';
    }
    strcat(str3,str);
    m=0;
    j=0;
    for(i=k-1;i>=0;i--){
    m=m+(int)str2[i]-48;
    m=m+(int)str3[i]-48;
    q=m%10;
    str4[j]=(char)q+48;
    m=m/10;
    j++;
    }
    if(m>0){
    str4[j]=(char)m+48;
    j++;
    }
        h=0;
            for(w=j-1;w>=0;w--){
                sum[u][h]=str4[w];
                h++;
            }

for(i=k-1;i>=0;i--){
    str3[i]='\0';
}
u++;
}
     while(scanf("%d",&n)==1){
          printf("The Fibonacci number for %d is ",n);
            if(n==1)printf("1\n");
     else if(n==0)printf("0\n");
     else{
 printf("%s\n",sum[n]);
     }
     }
     return 0;
}
