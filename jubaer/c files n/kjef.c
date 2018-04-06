#include <stdio.h>
int main()
{
     long long a,b,c=0,d,l,i,hz,kut,lk,cou[1000],length;
    char str[111][100],rev[1000];
    scanf("%lld",&a);
    sprintf(rev,"%lld",a);
    length=strlen(rev);
    b=a;
    l=0;
    hz=0;
    lk=0;
    for(i=0;i<length;i++){
        cou[i]=0;
    }

    for(i=0;a!=0;i++){
            b=a%10;
    a=a/10;
    if(l==1)kut=0;
    l++;
    if(l==3&&b!=0){
            strcpy(str[c],"shata");

            c++;
    }
    if(l==4&&b!=0){
            strcpy(str[c],"hazar");
    hz=1;
            c++;
    }
    if(l==5&&b!=0&&hz!=1){
                  strcpy(str[c],"hazar");

            c++;
    }
    if(l==6&&b!=0){
            strcpy(str[c],"lakh");
            c++;
            lk=1;
    }
    if(l==7&&b!=0&&lk!=1){
         strcpy(str[c],"lakh");
            c++;
    }
    if(l==8&&b!=0){
    strcpy(str[c],"kutti");
    l=1;
    kut=1;
    c++;
    hz=0;
    lk=0;
    if(kut==0&&l==9&&b!=0){
         strcpy(str[c],"kutti");
    l=1;

    c++;
    hz=0;
    lk=0;
    }
    }


    }

    for(i=0;i<c;i++)printf("%s\n",str[i]);
    printf("%lld",l);
}
