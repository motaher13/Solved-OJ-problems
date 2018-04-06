#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    int i;
    i=1;
    while(scanf("%s",str)){
    if(strlen(str)==1&&str[0]=='*')break;
    else if(strcmp(str,"Hajj")==0)printf("Case %d: Hajj-e-Akbar\n",i);
    else if(strcmp(str,"Umrah")==0)printf("Case %d: Hajj-e-Asghar\n",i);
   i++;
}
return 0;

}
