#include <stdio.h>
int main()
{
    int i,j;
    char op;
    scanf("%d %c %d",&i,&op,&j);
    switch(op){
    case'+':printf("%d",i+j);
    break;
    case'-':printf("%d",i-j);
    break;
    case'/':if(j)printf("%d",i/j);
    break;
    case'*':printf("%d",i*j);
    }
    return 0;




    }






