#include <stdio.h>
int main()
{
    char str[1000],str2[1000];
    int ara[10000];
    int *fp1,*fp2,*fp3,i,j,k,l,ck,*fp4;
    fp1=fopen("string.txt","w");
    gets(str);
    fprintf(fp1,"%s",str);
    fclose(fp1);
    fp2=fopen("string.txt","r");
    fp3=fopen("string2.txt","w");
    i=0;
    k=0;
    while(fscanf(fp2,"%c",&str[i])!=EOF){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                ck=1;
            fprintf(fp3,"%c",str[i]);
            for(j=0;j<k;j++){
                if(str[i]==str2[j]){
                    ck=0;
                    ara[j]++;
                }
            }
            if(ck==1){
                str2[k]=str[i];
                ara[k]=1;
                k++;
            }
            printf("%c",str[i]);
        }
        i++;
    }
    fclose(fp2);
    fclose(fp3);
    printf("\n");
    fp4=fopen("string3.txt","w");
    for(i=0;i<k;i++){
        fprintf(fp4,"%d %c\n",ara[i],str2[i]);
        printf("%d %c \n",ara[i],str2[i]);

    }

}
