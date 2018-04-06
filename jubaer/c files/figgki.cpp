#include <stdio.h>
#include <string.h>
int main()
{
int i,j,k,l,m,n,ck,r,q;

char str[1000],str2[1000],store[1000],store2[10000],sum[1000],ty[500],rev[300];
scanf("%s%s",str,str2);
j=0;
  for(i=strlen(str)-1;i>=0;i--){
  store[j]=str[i];
  j++;
  }
  store[j]='\0';
  j=0;
  for(i=strlen(str2)-1;i>=0;i--){
  store2[j]=str2[i];
  j++;
  }
  store2[j]='\0';
  if(strlen(store)<strlen(store2)){
  strcpy(ty,store);
  strcpy(store,store2);
  strcpy(store2,ty);
  }
  k=strlen(store)-strlen(store2);
  j=0;
  for(j=0;j<k;j++){
  rev[j]='0';

  }
 // store2[m]=(char)q+48;
  rev[j]='\0';
  strcat(rev,store2);
  strcpy(store2,rev);
  q=0;
  j=0;
  for(i=strlen(store)-1;i>=0;i--){
  n=(int)store[i]+(int)store2[i]+q-96;
  r=n%10;
  q=n/10;
  sum[j]=(char)r+48;
  j++;
  }
  sum[j]=(char)q+48;
   sum[++j]='\0';
   k=strlen(sum);
   for(i=k-1;i>=0;i--){
   printf("%c",sum[i]);
   }


}
