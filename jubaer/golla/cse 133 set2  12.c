#include <stdio.h>
#include <string.h>
int main(){
int n,i,j,k;
  char str[100][50],rev[1000];
  scanf("%d",&n);
  for(j=0;j<n;j++){
        scanf("%s",str[j]);
  }
   for(j=0;j<n;j++){
 for(i=strlen(str[j])-1,k=0;i>=0;i--,k++){
    rev[k]=str[j][i];
    }
    rev[k++]='\0';
    if(strcmp(str[j],rev)==0){
            printf("Case %d: yes\n",j+1);
    }
    else printf("Case %d: no\n",j+1);
    for(i=0;i<strlen(rev);i++)rev[i]='\0';
    }
    return 0;
    }
