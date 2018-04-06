#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,b=0;
    char lan[6][20]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
    char cnt[6][30]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
    char brk[]="#";

    char lan1[2050][20];

    for(i=0; ;i++){
        scanf("%s",lan1[i]);
        if(strcmp(lan1[i],brk)==0)
            break;}


    for(j=0;j<i;j++)
        {
            b=0;
        for(k=0;k<6;k++)
        {
            if(strcmp(lan1[j],lan[k])==0){
                printf("Case %d: %s\n",j+1,cnt[k]);
                b++;}
        }
        if(b==0)
            printf("Case %d: UNKNOWN\n",j+1);
        }
    return 0;
}
