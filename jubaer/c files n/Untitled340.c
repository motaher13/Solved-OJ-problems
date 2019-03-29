#include <stdio.h>
int main()
{
    char text[][87]={
    "when","i","went","to","sleep",""};
    int i,j;
    for(i=0;text[i][0];i++){
    for(j=0;text[i][j];j++)
    printf("%c",text[i][j]);
    }
    return 0;
}
