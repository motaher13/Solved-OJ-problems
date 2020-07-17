#include <stdio.h>
int main()
{
    int marks[4][5]={{67,98,70,68,56},{45,78,90,98,78},{56,76,87,89,56},{0,0,0,0,0}};
    int col;
    for(col=0;col<10;col++){
        marks[3][col]=marks[0][col]/4.0+marks[1][col]/4.0+marks[2][col]/2.0;
        printf("roll no:%d marks:%d\n",col+1,marks[3][col] );
    }
    return 0;
}
