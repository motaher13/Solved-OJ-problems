#include <stdio.h>
void func(void);
int main()
{
    func();
    return 0;
}
void func(void)
{
    printf("the line is printed");
    return;
    printf("the line is never printed");
}
