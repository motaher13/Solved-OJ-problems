
#include <stdio.h>
#include <math.h>

int main ()
{
    int testCase;

    scanf ("%d", &testCase);

    while ( testCase-- ) {

        double number;
        scanf ("%lf", &number);

        double x = sqrt (1 + (4*2*number));
        x = x - 1;
        x = x / 2;
        int k = (int) x;

        printf ("%d\n", k);

    }

    return 0;
}
