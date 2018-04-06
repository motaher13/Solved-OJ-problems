#include <stdio.h>
int main()
{
    char str[1000],rev[1000];
    gets(str);
    scanf("%s",rev);
    int k=0,l=0,kk,i,ck,j,p,q;
    for(i=0;rev[i]!='\0';i++){
    for(j=k;;j++){
    k++;
    if((int)str[j]==(int)rev[i]){
    l++;
    printf("%c %c l=%d  i=%d\n",str[j],rev[i],l,i);
    if(l==strlen(rev)){
    ck=1;
     break;
    }
    }
    if((int)str[j]!=(int)rev[i]){
             printf("%c %c l=%d  i=%d\n",str[j],rev[i],l,i);
    i=-1;
    kk=0;
    l=0;
    break;
    }
    }
    if(ck==1){

    kk=1;
     break;
    }
   else continue;
    }
    if(kk==1)printf("yse");
    else printf("no");


}
