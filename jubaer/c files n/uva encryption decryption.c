#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int i,j,k,l,m,z,d;
    while(gets(str)){
    if((int)str[0]<48||(int)str[0]>57){
    for(i=strlen(str)-1;i>=0;i--){
    k=(int)str[i];
    l=0;
    while(k!=0){

    l=k%10;
    printf("%d",l);
    k=k/10;
    }
    }
    }
    else {

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
    printf("\n");
    }
    return 0;
}
