#include <stdio.h>
int main()
{
    char str[1000];
    int i,j,k,l,m,z,d;
    gets(str);
    for(i=strlen(str)-1;i>=0;){
            m=(int)str[i]-48;
          z=(int)str[i-1]-48;
          d=(int)str[i-2]-48;

    if(((10*m)+z)>=32){
    k=(10*m)+z;
    printf("%c",(char)k);
    i=i-2;
    continue;
    }
    else if(((100*m)+(10*z)+d)<=122){
    k=(100*m)+(10*z)+d;
    printf("%c",(char)k);
    i=i-3;
    continue;
    }
    }
}
