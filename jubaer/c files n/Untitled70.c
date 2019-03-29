#include <stdio.h>
int main()
{
    int i;
    int s[]={45,87,97,67,9,56,67,67,89,89};
    int marks[101];
    for(i=0;i<101;i++){
        marks[i]=0;
    }
    for(i=0;i<=10;i++){
       marks[s[i]]++;
    }
    for(i=0;i<=100;i++){
       printf("number is:%d\n marks:%d\n",i,marks[i]);
    }
    return 0;
}
