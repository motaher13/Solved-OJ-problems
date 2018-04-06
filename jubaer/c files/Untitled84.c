#include <stdio.h>
int main()
{
    char country[]={'I','N','D','I','A'};
    char lenth,i;
    printf("%s\n",country);
    lenth=5;
    for(i=0;i<5;i++){
       if(country[i]>=65&&country[i]<=90){
          country[i]='a'+country[i]-'A';
       }
    }
    printf("%s\n",country);
    return 0;
}
