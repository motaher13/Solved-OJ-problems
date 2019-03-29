#include <stdio.h>
#include <string.h>
char str1[10000][220];
int co[20000];
char x[1002],y[1002];
 void quicksort(int co[],int p,int r,char str1[][100]);
int partition(int co[],int p,int r,char str1[][100]);
void quicksort(int co[],int p,int r,char str1[][100]){
    int q,i,j,n;

if(p<r){

   q=partition(co,p,r,str1);
   quicksort(co,p,q-1,str1);
   quicksort(co,q+1,r,str1);

}
}
int partition(int co[],int p,int r,char str1[][100]){
   int t,i,j;

   strcpy(x,str1[r]);
   i=p-1;
 // printf("%s vai\n",str1[r]);
   for(j=p;j<r;j++){

   if(strcmp(x,str1[j])>=0){
        printf("%s %s\n",x,str1[j]);
   i++;
  // printf("%s i\n",str1[i]);
   //printf("kutrta\n");
  strcpy(y,str1[j]);
  strcpy(str1[j],str1[i]);
  strcpy(str1[i],y);
 t=co[i];
 co[i]=co[j];
 co[j]=t;
   }
   }
   i=i+1;
 strcpy(y,str1[i]);
  strcpy(str1[i],str1[r]);
  strcpy(str1[r],y);
 t=co[r];
 co[r]=co[i];
 co[i]=t;

   return i;

}


int main()
{

    int i,n,j,k,l,ck,c,u,mid,t,r,h,w;
    char rev[100000],str[100000];

    scanf("%d",&n);
    getchar();
    w=1;


    for(i=0;i<n;i++){
    ck=0;
    gets(rev);
    h=i;
   if(strcmp(rev,"\0")==0){
    i=h-1;
    continue;
    }
    k=0;
    for(j=0;rev[j];j++){
    if(rev[j]!=' '){
    str[k]=rev[j];
    k++;
    ck=1;
    }
    if((ck==1&&rev[j]==' ')||(ck==1&&rev[j]=='\0')){
    str[k]='\0';
    break;
    }
    }
    c=0;
    if(i==0){
            strcpy(str1[w],str);
            co[w]=1;
            w++;
    }
    else if(i>0){
        for(u=1;u<w;u++){
            if(strcmp(str1[u],str)==0){
                co[u]++;
                c=1;
                break;
            }
        }
        if(c==0){
            strcpy(str1[w],str);
            co[w]=1;
            w++;
        }
    }
    }
    r=w-1;
//for(i=1;i<=r;i++)printf("%s %d\n",str1[i],co[i]);
  quicksort(co,1,r,str1);
 // printf("\n");
for(i=1;i<=r;i++)printf("%s ",str1[i],co[i]);
  return 0;
}
