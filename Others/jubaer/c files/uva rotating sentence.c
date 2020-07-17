#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,l,m;
    char str[500][500];
   int max=0;
    char c='\0';
k=0;
    while(gets(str[k])){
   k++;
}
for(i=0;i<k;i++){
    m=strlen(str[i]);
    if(m>max)max=m;
}
    for(i=0;i<k;i++){
        m=strlen(str[i]);
        for(j=m;j<max;j++){
            str[i][j]=' ';
        }
    }
    for(j=0;j<max;j++){
    for(i=k-1;i>=0;i--){
            if((int)str[i][j]==13)printf(" ");
     else printf("%c",str[i][j]);
    }
    printf("\n");
    }
    return 0;
}
