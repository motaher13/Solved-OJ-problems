#include <stdio.h>
int main()
{
    char ch;
    int i,j,k,ck=1;
    scanf("%d",&k);
    getchar();
    for(j=0;;j++){
    while(1){
    ch=getchar();
    if(ch=='\n')break;
    else if(ch==EOF){
        ck=0;
        break;
    }
    if(((int)ch-48)==3)printf("E");
    else if(((int)ch-48)==1)printf("I");
    else if(((int)ch-48)==4)printf("A");
    else if(((int)ch-48)==9)printf("P");
    else if(((int)ch-48)==8)printf("B");
    else if(((int)ch-48)==5)printf("S");
    else if(((int)ch-48)==7)printf("T");
    else if(((int)ch-48)==2)printf("Z");
    else if(((int)ch-48)==6)printf("G");
    else if(((int)ch-48)==0)printf("O");
    else printf("%c",ch);
    }
     if(ck==1)printf("\n");
   if(ck==0)break;
    }
    return 0;
}
