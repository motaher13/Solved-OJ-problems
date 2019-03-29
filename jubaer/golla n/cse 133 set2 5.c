#include <stdio.h>
int main()
{
    int q,n,i;
    char str[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
   scanf("%s",str[i]);
   }
   q=1;
   for(i=0;i<n;i++){
    printf("Case %d: Hello %s\n",q,str[i]);
    q++;
    }
    return 0;
}
