#include<stdio.h>
int main()
{
    int i,j,k;
    char str[10][10],w[10];
    strcpy(str[0],"BCG");
        strcpy(str[1],"BGC");
        strcpy(str[2],"GCB");
        strcpy(str[3],"CBG");
        strcpy(str[4],"CGB");
        strcpy(str[5],"GBC");
    for(i=0;i<5;i++)
        for(j=i+1;j<6;j++)
        if(strcmp(str[i],str[j])==1)
        {
            strcpy(w,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],w);
        }

    for(i=0;i<6;i++)
        printf("%s\n",str[i]);
}
