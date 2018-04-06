#include <stdio.h>
char name[100];
int value;
struct structer{
       char name[100];
       int value;

};
void swap(int a,int b,char p[],char q[]){
     int t;
     char s[100];
     t=a;
     a=b;
     b=t;
     strcpy(s,p);
     strcpy(p,q);
     strcpy(q,s);
}
int main(){
struct structer val1,val2;
    scanf("%s %d",val1.name,&val1.value);
    scanf("%s %d",val2.name,&val2.value);
    if(val2.value>val1.value)swap(val1.value,val2.value);
    printf("%s %d",val1.name,val1.value);
    printf("%s %d",val2.name,val2.value);
}
