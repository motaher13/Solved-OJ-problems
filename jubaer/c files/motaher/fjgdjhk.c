#include <stdio.h>
#include <stdlib.h>
int main()
{
int *p,k,n,ck,i,ara[100],ara2[100];
p=fopen("dog.txt","a");
for(k=1;k<=10;k++){
scanf("%d",&ara[k]);
fprintf(p,"%d\n",ara[k]);
}
fclose(p);
printf("\n\n");
p=fopen("dog.text","r");
n=0;
for(i=1;i<=10;i++){
        ck=1;
        fscanf(p,"%d",&ara[i]);
   for(k=2;k<=sqrt(ara[i]);k++){

    if(ara[i]%k==0)ck=0;
   }
if(ck==1&&ara[i]!=1){
        printf("%d ",ara[i]);
        ara2[n]=ara[i];
        n++;
       // fprintf(p,"%d  ",ara[i]);
}
}
fclose(p);
p=fopen("dog.txt","a");
printf("\n");
for(k=0;k<n;k++){
    fprintf(p,"%d ",ara2[k]);
}
fclose(p);
}
