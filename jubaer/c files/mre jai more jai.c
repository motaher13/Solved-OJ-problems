#include <stdio.h>
#include <string.h>
struct cse {
       char name[90];
       int id[90];
       double cgpa[89];
};
void print(struct cse student[10]){
int i;
for(i=0;i<3;i++){
     printf("%d %s %lf",student[i].id,student[i].name,student[i].cgpa);
}
}
int main(){
    struct cse student[10];
    int i;
    for(i=0;i<3;i++){
    scanf("%s %d %lf",student[i].name,&student[i].id,&student[i].cgpa);
    }
    printf(student);


}
