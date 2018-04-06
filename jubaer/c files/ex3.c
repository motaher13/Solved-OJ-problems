#include <stdio.h>
#include <string.h>
int main()
{
int ara[45],t1[45],t2[45],t3[45],r[45],i,j,n,t,k;
char name[45][7];
char o[45];
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%s",name[i]);
  scanf("%d",&r[i]);
  scanf("%d%d%d",&t1[i],&t2[i],&t3[i]);
  ara[i]=t1[i]+t2[i]+t3[i];
}
for(i=0;i<n-1;i++){
  for(j=i+1;j<n;j++){
  if(ara[i]<ara[j]){
  t=ara[i];
  ara[i]=ara[j];
  ara[j]=t;
  strcpy(o,name[i]);
  strcpy(name[i],name[j]);
  strcpy(name[j],o);
  t=r[i];
  r[i]=r[j];
  r[j]=t;
  }
  else if(ara[i]==ara[j]&&r[i]>r[j]){

        t=r[i];
        r[i]=r[j];
        r[j]=t;
          t=ara[i];
  ara[i]=ara[j];
  ara[j]=t;
  strcpy(o,name[i]);
  strcpy(name[i],name[j]);
  strcpy(name[j],o);


  }
  }
}
for(i=0;i<n;i++){
     printf("name:%s\tnumber:%d\tROLL:%d\tRANK:%d",name[i],ara[i],r[i],i+1);
     printf("%\n\n");
   }
   return 0;
}

