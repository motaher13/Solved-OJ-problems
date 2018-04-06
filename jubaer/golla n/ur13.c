
#include <stdio.h>
int main()
{
    int i,j,k,l,ck,kk,d,p,f;
    char str[1000],rev[1000],ch;
    gets(str);
    scanf("%s",rev);
    d=strlen(str);
    f=strlen(rev);
    k=0,l=0,kk=0,p=0;
    ck=0;
    for(j=p;j<f;j++){
    ch=rev[j];
    for(i=k;i<d;i++){
    k++;
    if(ch==str[i]){
    l++;
     if(l==f) ck=1;
     printf("r   %c %c l=%d  i=%d  ck=%d j=%d\n\n",ch,str[i],l,i,ck,j);
    break;
    }
    else if(ch!=str[i]){
     printf("   %c %c l=%d  i=%d  ck=%d j=%d\n",ch,str[i],l,i,ck,j);
    l=0;
    j=-1;
     printf("   %c %c l=%d  i=%d  ck=%d j=%d\n\n",ch,str[i],l,i,ck,j);
    break;
    }
    }
    if(ck==1){
    kk=1;
    }
    printf("%d %d",kk,ck);
    }
    if(kk==1)printf("\nyes");
    else printf("\nno");
}
