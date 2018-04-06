#include <stdio.h>
#include <string.h>
int main()
{
    char  str[10][50];
    int i,j=0,k=0,l,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
         gets(str[i]);
    }

   for(i=0;i<=n;i++){
        j=0;
   k=0;
    for(l=0;l<strlen(str[i]);l++){
        if(str[i][l]=='1'){
                j++;
        }
      else if(str[i][l]=='0'){
        k++;
      }

        if(k>j){
            printf("MAGIC");
          break;
        }
        else if(l==strlen(str[i])-1){
            printf("NORMAL");
        }
    }
    printf("\n\n");
   }

}

