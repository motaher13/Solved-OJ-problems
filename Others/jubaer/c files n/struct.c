#include <stdio.h>
#include <string.h>
struct cse
{
     char name[10];
     int id;
    double cgpa;
};
void print(struct cse student[]){
    int i;
   for(i=0;i<2;i++)printf("%s %d %lf",student[i].name,student[i].id,student[i].cgpa);

}
int main()
{
    struct cse student[23];
    int i;
     for(i=0;i<2;i++){

     scanf("%s %d %lf",student[i].name,&student[i].id,&student[i].cgpa);

     }
     print(student);
     //for(i=0;i<2;i++){

     //printf("%s\t%d\t%lf",student[i].name,student[i].id,student[i].cgpa);
     //printf("\n");




}
