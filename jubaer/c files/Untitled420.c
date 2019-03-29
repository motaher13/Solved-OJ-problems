#include <stdio.h>
void f1(int num[6]),f2(int num[]),f3(int *num);
int main()
{
    int count[6]={1,2,3,4,5};
    f1(count);
    f2(count);
    f3(count);


    return 0;
}
void f1(int num[6])
{
     int i;
     for(i=0;i<6;i++)printf("%d",num[i]);


}
void f2(int num[])
{
     int i;
     for(i=0;i<6;i++)printf("%d",num[i]);

}
void f3(int *num)
{
     int i;
     for(i=0;i<6;i++)printf("%d",num[i]);

}
