#include <stdio.h>
struct cse
{
   char name[10];
   int id;
   double cgpa;

};
void print(struct cse student[]){
     int i;
     for(i=0;i<5;i++){printf("%s\t %d\t %lf",student[i].name,student[i].id,student[i].cgpa);
     }
}
int main()
{
    struct cse student[10];
    int i;
    for(i=0;i<5;i++){
    scanf("%s %lf %d",student[i].name,&student[i].cgpa,&student[i].id);

    }
    print(student);


}
