#include <stdio.h>
int main()
{
    int i,j,sum,t,k;
    char str[1000];
    scanf("%d",&t);
    while(t--){
        sum=0;
        k=0;
       scanf("%s",str);
       for(i=0;str[i];i++){
        if(str[i]=='O'){
            k++;
            sum=sum+k;
        }
        if(str[i]=='X')k=0;
       }
        printf("%d",sum);
        printf("\n");
    }
   return 0;
}
