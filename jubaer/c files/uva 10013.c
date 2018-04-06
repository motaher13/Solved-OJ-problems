#include <stdio.h>
char str[1100000],str2[1100000],c,c1,rev[1100000];
int main()
{
   int i,j,k,l,m,n,q;
  // scanf("%d",&n);
  // while(n--){
   scanf("%d",&m);
 //  getchar();
   m=m*2;
   l=0;
   j=0;
  for(i=0;i<m;i++){
   // scanf("%c",&str[i]);
   str[i]=getchar();
   // l++;

  }

   //str[l]='\0';
   //str2[l]='\0';
   printf("%s \n",str);
   j=0;
   q=0;
   for(i=l-1;i>=0;i--){
   k=(int)str[i]+(int)str2[i]-96+q;

   q=k/10;
   k=k%10;
   rev[j]=(char)k+48;
   j++;
   }
   if(q>0){
   rev[j]=(char)q+48;
   rev[++j]='\0';
}
  else rev[j]='\0';
  printf("%c",rev);
  for(i=j-1;i>=0;i--){
  printf("%c",rev[i]);
  }
  printf("\n");
//}
}
