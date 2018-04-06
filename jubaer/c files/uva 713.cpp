#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
std::string str,str2,store,store2,sum,ty,rev;
//std::string str;
int main()
{
int i,j,k,l,m,n,ck,r,q,t,st1,st2,bac1,bac2,p,u,ck1,ck2,ck3;
//char str[1000],str2[1000],store[1000],store2[1000],sum[1000],ty[500],rev[300];
scanf("%d",&t);
while(t--){
        scanf("%s%s",str,str2);
j=0;
  for(i=strlen(str)-1;i>=0;i--){
  store[j]=str[i];
  j++;
  }
  store[j]='\0';
  j=0;
  for(i=strlen(str2)-1;i>=0;i--){
  store2[j]=str2[i];
  j++;
  }
  store2[j]='\0';
  if(strlen(store)<strlen(store2)){
  strcpy(ty,store);
  strcpy(store,store2);
  strcpy(store2,ty);
  }
    st1=0;
for(i=0;store[i];i++){
    if(store[i]!='0')break;
    else st1++;
}
bac1=0;
for(i=strlen(store)-1;i>=0;i--){
    if(store[i]!='0')break;
    else bac1++;
}
st2=0;
for(i=0;store2[i];i++){
    if(store2[i]!='0')break;
    else st2++;
}
bac2=0;
for(i=strlen(store2)-1;i>=0;i--){
    if(store2[i]!='0')break;
    else bac2++;
}
  k=strlen(store)-strlen(store2);
  j=0;
  for(j=0;j<k;j++){
  rev[j]='0';
  }
  rev[j]='\0';
  strcat(rev,store2);
  strcpy(store2,rev);
  q=0;
  j=0;
  for(i=strlen(store)-1;i>=0;i--){
  n=(int)store[i]+(int)store2[i]+q-96;
  r=n%10;
  q=n/10;
  sum[j]=(char)r+48;
  j++;
  }
  if(q>0){
  sum[j]=(char)q+48;
   sum[++j]='\0';
  }
  else sum[j]='\0';
  if(st1<st2){
    st1=st2;
  }
  if(bac1<bac2){
    bac1=bac2;
  }
p=1;
q=1;
u=1;
ck=1;
k=strlen(sum)-st1-bac2;
for(i=0;sum[i];i++){
        if(sum[i]!='0')
            ck=4;
        if(ck==4){
            printf("%c",sum[i]);
            u++;
            if(u>=k)ck=3;
        }
        else if(ck==1){
                if(p>=bac1)ck=2;
        else
            printf("%c",sum[i]);
            p++;

        }
        else if(ck==3){
                if(q>=st1)break;
            printf("%c",sum[i]);
            q++;

        }
}
printf("\n");
}
return 0;
}
