#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    int i,j,k,q,n,r;
    scanf("%d",&n);
    getchar();
    q=1;
    while(n--){
        r=0;
    while(1){
            ch=getchar();
    if(ch=='\n'){

            break;
    }
    if(r==0)
    printf("Case %d: ",q);
    r=1;
    scanf("%d",&k);
    for(j=0;j<k;j++){
    printf("%c",ch);
    }
    }
    printf("\n");
    q++;

    }

    return 0;
}
