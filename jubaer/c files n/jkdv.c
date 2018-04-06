#include <stdio.h>
void quicksort(char str[][15],int p,int r);
int partition(char str[][15],int p,int r);
char str[20000][15];

void quicksort(char str[][15],int p,int r){
    int q,i,j,n;

if(p<r){

   q=partition(str,p,r);
   quicksort(str,p,q-1);


   quicksort(str,q+1,r);


}
}
int partition(char str[][15],int p,int r){
   int t,i,j;
   char x[1000],y[1000];
   strcpy(x,str[r]);
   i=p-1;

   for(j=p;j<r;j++){

   if(strcmp(str[j],x)<=0){
   i++;
   strcpy(y,str[i]);
   strcpy(str[i],str[j]);
   strcpy(str[j],y);
   }
   }
   i=i+1;
  strcpy(y,str[i]);
   strcpy(str[i],str[r]);
   strcpy(str[r],y);
   return i;

}


int main()
{
    char str2[100][100],rev[1000];
    int i,j,k,tk[1000],n,o,p,q,r,l,u,c,mid;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    tk[i]=0;
    }

    for(i=1;i<=n;i++){
    scanf("%s",str[i]);
    }
    quicksort(str,1,n);
     for(i=1;i<=n;i++){
    printf("%s\n",str[i]);
    }

   for(i=1;i<=n;i++){
    scanf("%s",str2[i]);
    scanf("%d %d",&p,&q);

     l=0,u=n-1,c=0;
    while(l<=u){
         mid=(l+u)/2;
         if(strcmp(str2[i],str[mid])==0){
         tk[mid]=tk[mid]-p;
             c=1;
             break;
         }
         else if(strcmp(str2[i],str[mid])<0){
             u=mid-1;
         }
         else
             l=mid+1;
    }
    for(j=0;j<q;j++){
    scanf("%s",rev);
     while(l<=u){
         mid=(l+u)/2;
         if(strcmp(rev,str[mid])==0){
         tk[mid]=tk[mid]+(p/q);
             c=1;
             break;
         }
         else if(strcmp(str2[i],str[mid])<0){
             u=mid-1;
         }
         else
             l=mid+1;
    }
    }
    }
    for(i=1;i<=n;i++)printf("%s\n",str2[i]
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    if(strcmp(str2[i],str[j])==0){
        printf("%s %d",str2[i],tk[j]);
        break;
    }
    }
    }

}
