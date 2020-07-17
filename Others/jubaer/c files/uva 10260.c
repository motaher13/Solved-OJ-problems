#include <stdio.h>
int main()
{
    char str[1000];
    int i,j,k,l,m,n;
    while(scanf("%s",str)==1){
    m=90;
    for(i=0;str[i];i++){
    if((str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V')&&m!=1){
    printf("1");
    m=1;
    }
    else  if((str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z')&&m!=2){
    printf("2");
    m=2;
    }
 else if((str[i]=='D'||str[i]=='T')&&m!=3){
    printf("3");
    m=3;
    }
   else if((str[i]=='M'||str[i]=='N')&&m!=5){
    printf("5");
    m=5;
    }
   else if(str[i]=='L'&&m!=4){
        printf("4");
        m=4;
    }
   else if(str[i]=='R'&&m!=6){
        printf("6");
        m=6;
    }
    else if(str[i]=='A'||str[i]=='Y'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='H'||str[i]=='W')m=90;

    }
     printf("\n");
    }
    return 0;
}
