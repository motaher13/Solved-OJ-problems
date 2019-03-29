#include <stdio.h>
#include <string.h>
int main()
{
    char str[100][110];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n+1;i++){
    gets(str[i]);

    }
    for(i=0;i<n+1;i++){
        if(i>0) printf("Case %d: %d\n",i,strlen(str[i]));

    }
    return 0;
}
