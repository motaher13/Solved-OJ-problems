#include <stdio.h>
int main()
{
    int s[]={45,45,78,67,88,78,56,67,88,56};
    int i,marks,count;
    for(marks=0;marks<=100;marks++){
        count=0;


        for(i=0;i<10;i++){
           if(s[i]==marks){
             count++;
           }
       }
       printf("number of students:%d\n marks:%d\n",count,marks);
    }
    return 0;
}
