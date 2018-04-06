#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;
double ara[100000];
 char store[100000][10],str[10000];
  int i,j,k,l,m,n,cou,ck,t=1;
int main()
{
    double x,y,e,w,s,n,nw,ne,sw,se;
while(scanf("%s",str)){
   if(strcmp(str,"END")==0)break;
    l=0;
    cou=0;
    k=0,j=0;
    x=0;
    y=0;
    ck=1;
    for(i=0;str[i];i++){
    if((int)str[i]>=48&&(int)str[i]<=57){
    k=k*10+(int)str[i]-48;
    }
    else if(str[i]!='.'&&str[i]!=','&&str[i]!=' '){
    if(ck==1){
    ara[cou]=k;
    k=0;
    ck=0;
    cou++;
    }
    store[l][j]=str[i];
    j++;
    if(str[i+1]==','||str[i+1]=='.'){
    store[l][j]='\0';
    l++;
    ck=1;
    j=0;
    }
    }
    }
for(i=0;i<cou;i++){
    if(strcmp(store[i],"N")==0){
        y=y+ara[i];
    }
    if(strcmp(store[i],"S")==0){
        y=y-ara[i];
    }
      if(strcmp(store[i],"E")==0){
        x=x+ara[i];
    }
    if(strcmp(store[i],"W")==0){
        x=x-ara[i];
    }
     if(strcmp(store[i],"NW")==0){
      nw=sqrt(pow(ara[i],2)+pow(ara[i],2));
      x=x-(nw/2);
      y=y+(nw/2);
    }
    if(strcmp(store[i],"NE")==0){
      ne=sqrt(pow(ara[i],2)+pow(ara[i],2));
      x=x+(ne/2);
      y=y+(ne/2);
    }
      if(strcmp(store[i],"SW")==0){
      sw=sqrt(pow(ara[i],2)+pow(ara[i],2));
      x=x-(sw/2);
      y=y-(sw/2);
    }
    if(strcmp(store[i],"SE")==0){
      se=sqrt(pow(ara[i],2)+pow(ara[i],2));
      x=x+(se/2);
      y=y-(se/2);
    }
}
printf("Map #%d\n",t);
printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
 e=sqrt(pow(x,2)+pow(y,2));
printf("The distance to the treasure is %.3lf.\n\n",e);
t++;
strcpy(str,"\0");
for(i=0;i<cou;i++){
    strcpy(store[i],"\0");
}
}
return 0;
}
