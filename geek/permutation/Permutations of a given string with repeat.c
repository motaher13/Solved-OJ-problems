#include<stdio.h>
char str[] = "ABC";
int len ;
void allLexicographicRecur (char* data, int i)
{
    int j;
    for ( j=0; j<len; j++ )
    {
        data[i] = str[j] ;

        if (i == len-1)
            printf("%s\n", data);
        else
            allLexicographicRecur (data, i+1);
    }
}

int main()
{


    len = strlen (str) ;

    char *data = (char *) malloc (sizeof(char) * (len + 1)) ;
    data[len] = '\0';

    allLexicographicRecur (data, 0);
    return 0;
}
