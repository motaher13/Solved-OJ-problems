#include <stdio.h>
int main()
{
    char saarc[7][100]={"bangladesh","india","london","nepal","srilanka","bhutan","pakistan"};
    int row;
    for(row=0;row<=7;row++){
       printf("%s\n",saarc[row]);
    }
    return 0;
}
