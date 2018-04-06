#include <stdio.h>
#include <string.h>
char str[5000000],str2[5000];
int main()
{
    int i,l;
    while(scanf("%s",str)){
            if(strcmp(str,"END")==0)break;
       i=1;
    l=strlen(str);
    sprintf(str2,"%d",l);
    while(strcmp(str,str2)!=0){
        strcpy(str,str2);
        l=strlen(str);
        sprintf(str2,"%d",l);
        i++;
    }
    printf("%d",i);
    printf("\n");
    }
    return 0;
}
