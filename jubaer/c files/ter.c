#include <stdio.h>
#include <string.h>

int main (void)
{
    int i,len;
    char a [20] = "Hi";
    a [2] = 1;
    a [3] = 2;
    a [4] = 3;
    a [5] = '\0';

    printf ("String: %s\n", a);

     len = strlen (a);

    printf ("Numbers: ");

    for (  i = 0; i < len; i++ )
        printf ("%d ", a [i]);

    printf ("\n");

    return 0;
}

