#include <stdio.h>
int main()
{
    char str[1000],str2[100][100],rev[100];
    int i,j;
    gets(str);
    scanf("%s",rev);
    printf("%d\n",strlen(rev));
int   k=0,ck=1, l=1,p=0;
    for(i=0;i<strlen(rev);i++){
    for(j=k;j<strlen(str);j++){
            //if(j==strlen(str)-1&&i!=strlen(rev)-1)ck=0;

    //  if(rev[0]==str[i]){

//printf("%c %c  %d\n",rev[0],str[i],l);



    if(rev[i]==str[j]){
                l++;
            printf("%c %c\n %d",str[j],rev[i],l);

       if(l==strlen(rev))ck=1;
    printf("%d   \n",l);
    k++;

      break;
    }
   else if(rev[i]!=str[j]){
            l=1;
    i=0;
    printf("%c %c\n",str[j],rev[i]);
    printf("i=%d l=%d\n",i,l);
    k++;
    break;
    }
    }
    if(ck==1)break;
    }
    printf("%d %d ",k,ck);
    if(ck==1)printf("yes");
    else printf("n0");
}
