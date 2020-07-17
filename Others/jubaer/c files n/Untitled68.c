#include <stdio.h>
int main()
{
    int f[]={45,89,78,68,58,98,56,78,79,77},
    s[]={45,65,76,87,76,75,60,89,45,34},
    t[]={45,56,76,75,87,98,78,79,75,74};
    int i;
    double st[10];
    for(i=0;i<10;i++){
      st[i]=f[i]/4.0+s[i]/4.0+t[i]/4.0;
    }
    for(i=1;i<=10;i++){
       printf("roll no:%d\n marks:%lf\n",i,st[i-1]);
    }
    return 0;
}
