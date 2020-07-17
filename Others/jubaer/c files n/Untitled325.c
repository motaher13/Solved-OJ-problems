#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ara1[89],ara2[90],temp[89];
    int i,j;
    for(i=0;i<80;i++){
    ara1[i]=getche();
    printf(ara1);
    }
    for(j=i-1;j>=i;j--){
    temp[i]=ara2[j];
    ara2[j]=ara1[i];
    ara1[i]=temp[i];
    printf("%s",ara2[j]);
    }

    return 0;
}
