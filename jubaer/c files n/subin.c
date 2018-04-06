#include <stdio.h>
#include <stdio.h>

int main()
{
    char str[67];
    int i,j=0,k=0,t;
    scanf("%d",&t);
    while(t--){
    scanf("%s",str);
   for(i=0;str[i]!='\0';i++){

    if(str[i]=='1'){
    j++;

    }
    else {
    k++;
    }
    if(k>j){
    printf("magic");
    break;
     }
    else if(i==strlen(str)-1){
    printf("no");
    }
    }
    printf("\n\n");
    }
  return 0;
}
