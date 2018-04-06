#include <stdio.h>
int main()
{
    char str[10000],str2[1000],str3[100000];
    int l;
    scanf("%s%s",str,str2);
    int m=strlen(str2)-strlen(str);
    for( l=0;l<m;l++){
        str3[l]='0';
    }
    printf("%d\n\n",l);
    strcat(str3,str);
    printf("%s\n",str3);
    printf("%d %d",strlen(str3),strlen(str2));
}
