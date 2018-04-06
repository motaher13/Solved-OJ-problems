#include <stdio.h>
char str[10000][20],str2[100],str3[10000];
int main()
{
    int i,j,k=1,l,m,n,b;
    scanf("%d",&l);
    while(l--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    scanf("%s",str2);
    printf("Case %d:\n",k++);
    for(i=0;i<n;i++){
        b=0;
        for(j=0;str2[j];j++){
            if(str[i][j]!=str2[j])b++;
            if(b>1)break;

        }
        if(b<=1){
            printf("%s\n",str[i]);
        }

    }
    }
    return 0;

}
