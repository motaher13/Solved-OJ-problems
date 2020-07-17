#include <stdio.h>
#include <string.h>
int main()
{
   char str[120][1000];
   char happy[100][100]={"ghgh","Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
   int i,j,k,l,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   scanf("%s",str[i]);
   }
   for(i=1,j=1,l=0;;i++,j++){
    printf("%s: %s\n",str[i],happy[j]);
    l++;
    if(l>n&&j==16)break;
    if(i==n&&j==16)break;
     if(j<16&&i==n){
        i=0;
     }
     else if(j==16&&i<n){
        j=0;
     }

   }
   return 0;
}
