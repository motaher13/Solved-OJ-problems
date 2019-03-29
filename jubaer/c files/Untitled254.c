#include <stdio.h>
int myfunc();
int main()
{
    myfunc();
    return 0;
}
int myfunc()
{
    int i;
    for(i=100;i>0;i--){
    printf("%d\n",i);
    }
}
