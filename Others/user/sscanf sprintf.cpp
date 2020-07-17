//sscanf

#include<stdio.h>
int main()
{
    char str[]="123 456";
    char a[10],b[10];
    sscanf(str,"%s %s",&a,&b);
    printf("%s\n",a);
    printf("%s",b);
}


//sprintf

//#include <stdio.h>
//
//int main()
//
//{
//
//    char stringa[30];
//
//    int fingers = 5;
//
//    sprintf(stringa, "Number of fingers making up a hand are %d", fingers);
//
//    puts(stringa);
//
//    return(0);
//
//}
