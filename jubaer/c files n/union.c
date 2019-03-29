#include <stdio.h>
struct my{

       int x;
       float y;

};
struct my print(struct my pr){
   struct my result;
   result.x=pr.x;
   if(result==0)return 1;

    else return result;

}
int main()
{
    struct my student;
    student.x=11;
   printf("%d",print(student));





}
