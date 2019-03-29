#include <stdio.h>
int main()
{
    char text[10][45];
    int i;
    for(i=0;i<10;i++){
    printf("%d",i+1);
    gets(text[i]);
    }
    do{
    printf("enter from 1-10");
    scanf("%d",&i);
    i--;

    if(i>=0&&i<10)printf("%s\n",text[i]);
    }while(i>=0);
    return 0;
}
