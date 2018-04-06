#include <stdio.h>
 char str[1100000],c,str2[1100000],rev[1100000];
int main()
{

    int i,j,l,k,m,n,t,r,q,o,z;
    scanf("%d",&z);
    while(z--){
    scanf("%d",&k);
    for(i=0;i<k;i++){
    scanf("%d%d",&m,&n);
    str[i]=(char)m+48;
    c=getchar();
    str2[i]=(char)n+48;
    }
    str[i]='\0';
    str2[i]='\0';
   q=0;
   l=0;
   o=0;
   for(j=i-1;j>=0;j--){

    o=(int)str[j]-48;
    o=o+(int)str2[j]-48;
    o=o+q;
    q=o/10;
    r=o%10;
    rev[l]=(char)r+48;
    l++;
   }
  rev[l]='\0';
  for(i=l-1;i>=0;i--){
    printf("%c",rev[i]);
  }
if(z>0)printf("\n\n");
else printf("\n");
    }
    return 0;
}
