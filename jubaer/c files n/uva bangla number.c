#include <stdio.h>
int main()
{
     long long a,b,c=0,d,l,i,hz,kut,lk,cou[1000],length,q,sum,ck,r,u;
    char str[111][100],rev[1000];
    scanf("%lld",&a);
    sprintf(rev,"%lld",a);
    length=strlen(rev)-1;
    b=a;
    l=0;
    hz=0;
    lk=0;
    ck=1;
q=length;
sum=0;
    for(i=0;i<=length;i++){
        cou[i]=0;
    }

    for(i=0;a!=0;i++){
            b=a%10;
            if(b==0)sum++;
           // if(b==0)sum++;
     l++;
    a=a/10;
    if(l==1||l==2){
            kut=0;
            hz=0;
            lk=0;
    }

    if(l==3&&b!=0){
            sum=0;
            strcpy(str[c],"shata");
      cou[q+sum]=1;
            c++;
            sum=0;
    }
    if(l==4&&b!=0){
            strcpy(str[c],"hazar");
    hz=1;

    cou[q+sum]=1;
            c++;
            sum=0;
    }
    if(l==5&&b!=0&&hz!=1){
                  strcpy(str[c],"hazar");
cou[q+sum]=1;
            c++;
            sum=0;
    }
    if(l==6&&b!=0){
            strcpy(str[c],"lakh");
            c++;

            cou[q+sum]=1;
            sum=0;
            lk=1;
    }
    if(l==7&&b!=0&&lk!=1){
         strcpy(str[c],"lakh");
         cou[q+sum]=1;
            c++;
            sum=0;
    }
    if(l==8&&b!=0){
    strcpy(str[c],"kutti");
    l=1;
    kut=1;
    c++;
    hz=0;

    lk=0;
    cou[q+sum]=1;
    sum=0;
    }
    if(kut==0&&l==9&&b!=0){
         strcpy(str[c],"kutti");
    l=2;

    c++;
    hz=0;
    lk=0;
    cou[q+sum]=1;
    sum=0;
    }
    if(l==9&&b==0&&i<length){
        strcpy(str[c],"kuti");
        c++;
        cou[q+sum]=1;
        sum=0;
        hz=0;
        lk=0;
    }
    if(i>8&&(l==3||l==5||l==7)&&b==0){
            if(l==3&&i==length) strcpy(str[c],"shata");
     if(l==5&&i==length) strcpy(str[c],"hazar");
     if(l==7&&i==length) strcpy(str[c],"lakh");


 cou[q+sum]=1;
 sum=0;
    c++;
    hz=0;
    lk=0;
   // cou[q+sum]=1;
    sum=0;
    }
    if(i==8)l=2;
    q--;

    }

    //for(i=0;i<c;i++)printf("%s  %lld\n",str[i],i);
    //printf("%lld",l);
    int k=c-1;
    ck=0;
    r;
    u=0;
    for(i=0;rev[i];i++){
            if(rev[i]=='0'&&rev[i-1]!='0'&&ck!=1)printf("%c",rev[i]);
         else  if(rev[i]!='0'){
                printf("%c",rev[i]);

         }
         if(cou[i]!=1)ck=0;
        if(cou[i]==1){
          if(i==0)r=i;
          else if(i-r==1)printf(" ");
          printf("%s ",str[k]);
          r=i;
          k--;
         // ck=1;
        }
    }
}
