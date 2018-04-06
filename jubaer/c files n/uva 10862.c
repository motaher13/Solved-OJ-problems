#include <stdio.h>
#include <string.h>
char str[5000],str2[5000],str3[5000],sum[5050][5000],str4[5000],kap[3000][1500];
int main()
{
    int i,j,k,l,m,q,u,a=0,b=1,w,h,n,p=1;
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
if(u%2==0){
    strcpy(kap[p],sum[u]);
    p++;
}
for(i=k-1;i>=0;i--){
    str3[i]='\0';
}
u++;
}
     while(scanf("%d",&n)==1){
            if(n==0)break;

 printf("%s\n",kap[n]);

     }
     return 0;
}
