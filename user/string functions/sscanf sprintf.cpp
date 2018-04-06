//sscanf

/*#include<stdio.h>
int main()
{
    char str[]="123 456";
    char a[10],b[10];
    sscanf(str,"%s %s",a,b);
    printf("%s\n",a);
    printf("%s",b);
}*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[]="mmmm 4";
    int eggcount;
    float cost;
    sscanf(str,"mmmm %d",&eggcount);
    printf("%d",eggcount);
}

//sprintf

/*#include <stdio.h>

int main()

{

char *stringa[30];

int *fingers = 5;

sprintf(stringa, "Number of fingers making up a hand are %f", fingers);

puts(stringa);

return(0);

}*/
