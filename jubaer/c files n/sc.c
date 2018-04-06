#include <stdio.h>
int main()
{
    char str[1000];
    int i,j,k,l,m=0,n,ck1=0,ck2=0,ck3=0;
    gets(str);
    k=0;
    for(i=0;str[i];i++){
    if(m==1&&str[i]=='/')m=2;
    if(str[i]=='/'&&m==0)m=1;
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'){
    if(m==0)ck1++;
    if(m==1)ck2++;
    if(m==2)ck3++;
    }

    }
    printf("%d %d %d",ck1,ck2,ck3);
}
