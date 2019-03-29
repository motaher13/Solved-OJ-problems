#include<stdio.h>
int main()
{
    int i,tst;
    char ar;
    scanf("%d ",&tst);
    while(ar=getchar())
    {
        if(ar==EOF)
            break;
        if(ar=='3')printf("E");
        else if(ar=='1')printf("I");
        else if(ar=='9')printf("P");
        else if(ar=='4')printf("A");
        else if(ar=='8')printf("B");
        else if(ar=='5')printf("S");
        else if(ar=='0')printf("O");
        else if(ar=='7')printf("T");
        else if(ar=='2')printf("Z");
        else if(ar=='6')printf("G");
        else printf("%c",ar);

    }
return 0;
}
