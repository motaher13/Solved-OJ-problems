#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int *fp,*fp2,*fp1;
    fp=fopen("file2.txt","w");
    scanf("%s",str);
    fprintf(fp,"%s",str);
    fclose(fp);
    fp1=fopen("file2.txt","r");
    fp2=fopen("file3.txt","w");
    fscanf(fp1,"%s",str);
    fprintf(fp2,"%s",str);
    fclose(fp1);
    fclose(fp2);

}
