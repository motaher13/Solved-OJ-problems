#include<stdio.h>
struct std
{
    char name[100];
    int roll;
    float cgpa;
    struct date
    {
        int day;
        int month;
        int year;
    }birthday;
};

int main()
{
    struct std student[100]={ "omy",234,3.4,2,3,14,
                                "aman",235,3.5,3,4,15};
    printf("%s\n",student[0].name);
    printf("%d\n",student[0].roll);
    printf("%f\n",student[0].cgpa);
    printf("%d %d %d",student[0].birthday.day,student[0].birthday.month,student[0].birthday.year);

}
