#include <stdio.h>
int main()
{
    int i,j,k,l,p;
    char str[100000],rev[100][100];
    scanf("%s",str);
    l=1,j=0,p;
    for(i=strlen(str)-1;i>=0;){
    if (l==1){
    rev[p][j]=str[i-1];
    rev[p][j+1]=str[i-2];
    rev[p][j++]='\0';
    p++;
    l=l+1;
    i=i-2;
    j=0;
    }
    if(l==2){
    rev[p][j]=str[i];
    rev[p][j++]='\0';
    strcat(rev[p],"  shata");
    p++;
    l=l+1;
    i=i-1;
    j=0;
    }
    else if(l==3){
    if(i-1!=-1){
    rev[p][j]=str[i-1];
    rev[p][j++]=str[i];
    rev[p][j++]='\0';
    strcat(rev[p]," hazar");
    p++;
    i=i-2;
    j=0;
    l++;
    }
    else if(i-1==-1){
    rev[p][j]=str[i];
    rev[p][j++]='\0';
    strcat(rev[p],"  lakh");
    p++;
    j=0;
    i=i-1;
    l++;
    }
    }


    }
}
