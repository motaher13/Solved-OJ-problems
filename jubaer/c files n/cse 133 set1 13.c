#include<stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    int l,i,j,k,sum;
    char c='%';
    while(gets(str)){
            l=0,k=0,j=0;
    for(i=0;i<strlen(str);i++){
    if((int)str[i]>47&&(int)str[i]<58)l++;
    else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')k++;
  else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')k++;
  else if(((int)str[i]>64&&(int)str[i]<91)||((int)str[i]>96&&(int)str[i]<123))j++;
  }
  printf("%d%d%d",k,j,l);
  sum=j+k+l;
  printf("Vowels = %0.2lf%c\n",((double)k/(double)sum)*100,c);
  printf("Consunant = %0.2lf%c\n",((double)j/(double)sum)*100,c);
      printf("Digits = %0.2lf%c\n",((double)l/(double)sum)*100,c);
      }
    return 0;
}
