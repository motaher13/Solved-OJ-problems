#include <stdio.h>
#include <string.h>
 char dic[200000][100];
 char x[100200],y[100200];
 int co[100000];
 void quicksort(int co[],int p,int r,char dic[][100]);
int partition(int co[],int p,int r,char dic[][100]);
void quicksort(int co[],int p,int r,char dic[][100]){
    int q,i,j,n;

if(p<r){

   q=partition(co,p,r,dic);
   quicksort(co,p,q-1,dic);
   quicksort(co,q+1,r,dic);

}
}
int partition(int co[],int p,int r,char dic[][100]){
   int t,i,j;
   strcpy(x,dic[r]);
   i=p-1;
   for(j=p;j<r;j++){
   if(strcmp(x,dic[j])>=0){
   i++;
  strcpy(y,dic[j]);
  strcpy(dic[j],dic[i]);
  strcpy(dic[i],y);
  t=co[i];
  co[i]=co[j];
  co[j]=t;
   }
   }
   i=i+1;
 strcpy(y,dic[i]);
  strcpy(dic[i],dic[r]);
  strcpy(dic[r],y);
    t=co[i];
  co[i]=co[j];
  co[j]=t;
   return i;
}

int main()
{
    int i,n,j,k,l,ck,c,u,mid,t,r,h,w;
    char rev[500000],str[500000];
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
            strcpy(dic[w],str);
            co[w]=1;
            w++;
    }
    else if(i>0){
        for(u=1;u<w;u++){
            if(strcmp(dic[u],str)==0){
                co[u]++;
                c=1;
                break;
            }
        }
        if(c==0){
            strcpy(dic[w],str);
            co[w]=1;
            w++;
        }
    }
    }
    r=w-1;
  quicksort(co,1,r,dic);
for(i=1;i<=r;i++)printf("%s %d\n",dic[i],co[i]);
  return 0;
}
