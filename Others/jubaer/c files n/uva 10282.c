#include <stdio.h>
#include <string.h>
 char str[200000][15],dic[200000][15],rev[200000];
 char x[100200],y[100200];
 void quicksort(char str[][15],int p,int r,char dic[][15]);
int partition(char str[][15],int p,int r,char dic[][15]);
void quicksort(char str[][15],int p,int r,char dic[][15]){
    int q,i,j,n;

if(p<r){

   q=partition(str,p,r,dic);
   quicksort(str,p,q-1,dic);
   quicksort(str,q+1,r,dic);

}
}
int partition(char str[][15],int p,int r,char dic[][15]){
   int t,i,j;

   strcpy(x,dic[r]);
   i=p-1;

   for(j=p;j<r;j++){

   if(strcmp(x,dic[j])>=0){
   i++;
  strcpy(y,dic[j]);
  strcpy(dic[j],dic[i]);
  strcpy(dic[i],y);
  strcpy(y,str[j]);
  strcpy(str[j],str[i]);
  strcpy(str[i],y);
   }
   }
   i=i+1;
 strcpy(y,dic[i]);
  strcpy(dic[i],dic[r]);
  strcpy(dic[r],y);
  strcpy(y,str[i]);
  strcpy(str[i],str[r]);
  strcpy(str[r],y);

   return i;

}

int main()
{

   char ch;
   int i,j,k,l,m,n,ck,kk,r,q,u,c,mid;
   q=1;
   while(1){
   k=0,i=0,m=0,n=0,ck=0,kk=0;
   while(1){
   ch=getchar();
   if(ch=='\n'&&(k==0&&i==0)){
   ck=1;
   break;
   }
  else if(ch=='\n'){
        dic[q][k]='\0';
   break;

   }
   if(ch==' '){
   str[q][i]='\0';
   kk++;
   }
   if(kk==0){
   str[q][i]=ch;
   i++;
   }
   if(kk!=0){
       if(kk>1){
   dic[q][k]=ch;
   k++;
       }
       kk++;
   }
   }
   if(ck==1){
   break;
   }
   q++;
   }
   r=q-1;
   quicksort(str,1,r,dic);
   for(i=1;i<=r;i++)printf("%s ",dic[i]);
  while(scanf("%s",rev)!=EOF){
   l=1,u=r,c=0;
    while(l<=u){
         mid=(l+u)/2;
         if(strcmp(rev,dic[mid])==0){
             c=1;
             k=mid;
             printf("%s\n",str[mid]);
             break;
         }
         else if(strcmp(rev,dic[mid])<0){
             u=mid-1;
         }
         else if(strcmp(rev,dic[mid])>0)
             l=mid+1;
    }
    if(c==0)
         printf("eh\n");

  }
return 0;
}
