#include <stdio.h>
int main()
{
    char str1[1000],str2[1000],rev[100][1000],q[100]=" ",c,h;
    int i,j,k,l,n,r;
    scanf("%s%s",str1,str2);
    for(i=strlen(str2)-1,l=0;i>=0;i--,l++){
      n=(int)str2[i]-48;
      printf("%d",n);
      r=0;
      q[100]=" ";
      for(j=strlen(str1)-1;j>=0;j--){
      k=r+(n*(int)str1[j]-48);
     h=(char)k%10;
     printf("%c",h);
      rev[l][j]=(char)h;
      r=k/10;
      }
      c=(char)r;
      q[strlen(q)-1]='c';
      strcat(q,rev[l]);
      printf("%s\n",q);

    }

}
