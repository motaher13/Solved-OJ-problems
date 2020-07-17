#include <stdio.h>
int main()
{
    int i,l,j,k;
    char str[90],seq[90];
    gets(str);
    gets(seq);
    k=0;
    for(i=0;i<5;i++){
    if(str[i]==' '){
    if(seq[k]=='A'){
    l=str[i];
    str[i]=str[i+1];
    str[i+1]=l;
    k++;
    continue;
    }
    }
    }




}
