#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int t,i;
    scanf("%d",&t);
    while(t--){
    scanf("%s",str);
    if(strlen(str)==5){
    printf("3");
    }
    else{
    if((str[0]=='o'&&str[1]=='n')||(str[0]=='o'&&str[2]=='e')||(str[1]=='n'&&str[2]=='e')){
    printf("1");
    }
    else printf("2");
    }

    printf("\n");
    }
    return 0;

}
