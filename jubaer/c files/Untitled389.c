#include <stdio.h>
double volume();
int main()
{
    double vol;
    vol=volume(12.8,98.8,98.7);
    printf("volume %f",vol);



return 0;
}
double volume(double s1,double s3)
{
return s1*s3;
}
