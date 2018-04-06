#include <stdio.h>
void f1(int num[5]),f2(int num[]),f3(int *num);
int main()
{
    int count[5]={1,2,3,4,5};
    f1(count);
    f2(count);
    f3(count);

    return 0;
}
void f1(int num[5])
{
     int a;
     for(a=0;a<5;a++)printf("%d",num[a]);



}
void f2(int num[])
{
     int a;
     for(a=0;a<5;a++)printf("%d",num[a]);


}
void f3(int *num)
{
     int a;
     for(a=0;a<5;a++)printf("%d",num[a]);


}
