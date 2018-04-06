#include <stdio.h>
int main()
{
    int i,k,t;
    int ara[20];
    char ch;
    while(scanf("%d",&t)!=EOF){
    for(k=0;k<t;k++){

    i=0;
    while(1){
scanf("%c",&ch);
if(ch=='q')break;
    i++;
    }
     ara[k]=i;
    printf("\n");
    }
    for(k=0;k<t;k++)printf("%d\n",ara[k]);
    printf("\n\n");
    }
    return 0;
}
