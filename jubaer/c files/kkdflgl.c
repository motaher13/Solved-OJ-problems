#include <stdio.h>
#include <string.h>
char str1[100000][200],str[2000000],rev[2000000];
int co[2000000];
int main()
{

    int i,n,j,k,l,ck,p,c,u,mid,t,r,h;

    scanf("%d",&n);
    getchar();
    p=0;
    for(i=0;i<n;i++)co[i]=1;

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
            strcpy(str1[p],str);
            p++;
    }
    if(i>0) {
         l=0,u=p-1;
    while(l<=u){
         mid=(l+u)/2;
         if(strcmp(str,str1[mid])==0){
             c=1;
             co[mid]++;
             break;
         }
         else if(strcmp(str,str1[mid])<0){
             u=mid-1;
         }
         else
             l=mid+1;
    }
    }

    if(c==0&&i>0){
        strcpy(str1[p],str);
        p++;

    }
    strcpy(rev," ");
    strcpy(str," ");
    }

   for(i=0;i<p-1;i++){
        for(j=i+1;j<p;j++)
    if(strcmp(str1[i],str1[j])>0){
     strcpy(rev,str1[i]);
   strcpy(str1[i],str1[j]);
    strcpy(str1[j],rev);
    t=co[i];
    co[i]=co[j];
    co[j]=t;
    }
   }
  for(l=0;l<p;l++)printf("%s %d\n",str1[l],co[l]);

  return 0;
}
