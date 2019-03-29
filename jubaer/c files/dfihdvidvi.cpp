#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[10000],str2[10000],cat[1000],fat[1000],rev[1000],t,sto[1000];
    int i,j,k,l,m,n,r,p,q,d,x,y,z,du,u;
    cin>>n>>str;
    strcpy(str2,str);
    p=(strlen(str))-(n+2);
    k=p+n;
    printf("%d %d %d\n",k,p,n);
    l=0;
    for(i=2;str[i];i++){
    t=str[i];
    str[i]=str[i-1];
    str[i-1]=t;
    l++;
    if(l==k)break;
    }
  //  str[i]='\0';
    printf("%s\n%s\n",str,str2);
    l=0;
     for(i=2;str2[i];i++){
  if(p==0)break;
    t=str2[i];
    str2[i]=str2[i-1];
    str2[i-1]=t;
 l++;
    if(l>=p)break;

    }
    //str[i-1]='\0';
   printf("\n%s",str2);
    for(i=0;str[i];i++){
    if(str[i]=='.')break;
    }
   for(j=0;j<str2[j];j++){
   if(str2[j]=='.')break;
   }
   k=i-j;
   for(r=0;r<k;r++){
   cat[r]='0';
   }
   strcat(cat,str2);
   printf("\n%s",cat);
   p=(strlen(str)-1-i);
   q=strlen(str2)-1-j;
   d=q-p;
   for(r=0;r<d;r++){
    fat[r]='0';

   }
   strcat(str,fat);
   printf("\n%s",str);
   d=0;
   for(du=strlen(str)-1;du>=0;){
        if(str[du]=='.'){
          rev[d]='.';
          d++;
        }
        else {
            if(str[du-1]!='.'&&du!=0){
                k=du-1;
            }
            else if(str[du-1]=='.'){
                k=du-2;
            }
            x=(int)str[du]-48;
            y=(int)str[k]-48;
            z=(int)cat[du]-48;
            if(x<z){
                x=10+x;
                y--;
            }
            p=x-z;


        rev[d]=(char)p+48;
        d++;
        if(du!=0)
        str[k]=(char)y+48;
        }
    du--;
   }
   //printf("\n%s",strrev(rev));
  for(u=0,r=d-1;r>=0;u++,r--){
    sto[u]=rev[r];
  }
  printf("\n%s",sto);
}
