#include <stdio.h>
int main()
{
    int s[]={3,7,8,6,9,5};
    int i,j;
    int marks[5];
    for(i=0;i<5;i++){
       marks[i]=0;
    }
    for(i=0;i<6;i++){
       marks[s[i]]++;
    }
    for(j=0;j<4;j++){
       printf("%d\n",marks[j]);
    }
    return 0;
}
