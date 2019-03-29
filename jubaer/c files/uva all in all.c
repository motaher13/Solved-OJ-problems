#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000],str2[100000];
    int i,j,l,ck;
    while(scanf("%s",str)!=EOF){
    scanf("%s",str2);
    l=0;
    ck=0;
    for(i=0;i<strlen(str);i++){
    for(j=l;j<strlen(str2);j++){
            l++;
    if(str[i]==str2[j]){
    ck++;
    break;
    }

    }
    }
    if(ck==strlen(str))printf("Yes\n");
    else printf("No\n");
    }
    return 0;
}
