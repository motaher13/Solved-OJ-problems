#include <stdio.h>
int main()
{
    char str[10000];
    int i,j=1,k,l;
    scanf("%d",&l);
    getchar();
    while(l--){
    gets(str);
    k=0;
    for(i=0;str[i];i++){
    if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')k++;
    if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')k=k+2;
    if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y')k=k+3;
     if(str[i]=='s'||str[i]=='z')k=k+4;
    }
    printf("Case #%d: %d\n",j,k);
    j++;
    }
    return 0;
}
