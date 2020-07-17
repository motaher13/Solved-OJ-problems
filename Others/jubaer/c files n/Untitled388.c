#include <stdio.h>
double volume();
int main()
{
    double vol;
    vol=volume(12.7,90.8,67.8);
    printf("volume %f",vol);


return 0;
}
double volume(double s1,double s2,double s3)
{
return s1*s2*s3;
}
