#include <stdio.h>
int main()
{
    char str[10000],str1[100][1000];
    int i,j,k,l,p;
    scanf("%s",str);
    l=strlen(str)-1;
    i=l;
    j=0;
    while(i>=0){
        if(i==l){
            if(str1[i-1]!='0'&&i-1!=-1){
                str1[p][j]=str[i-1];
                str1[p][j+1]=str[i];
                str1[p][j++]='\0';
                p++;
                i=i-2;
                j=0;
            }
            else if(str[i-1]=='0'&&str[i]!='0'){
                str1[p][j]=str[i];
                str1[p][j++]='\0';
                p++;
                i=i-2;
                j=0;
            }
            else i=i-2;
        }
        if(i==12||i==5){
            if(str[i]!='0'){
                str1[p][j]=str[i];
                str1[p][j++]='\0';
                j=0;
                p++;
                i=i-1;
                else i=i-1;
            }
            if(i==4||i==11){
                 if(str1[i-1]!='0'&&i-1!=-1){
                str1[p][j]=str[i-1];
                str1[p][j+1]=str[i];
                str1[p][j++]='\0';
                strcat(str1[p],"hajar");
                p++;
                i=i-2;
                j=0;
            }
            else if(str[i-1]=='0'&&str[i]!='0'){
                str1[p][j]=str[i];
                str1[p][j++]='\0';
                strcat(str1[p],"hajar");
                p++;
                i=i-2;
                j=0;
            }
            else i=i-2;
            }
            if(i==2||i==9){
                  if(str1[i-1]!='0'&&i-1!=-1){
                str1[p][j]=str[i-1];
                str1[p][j+1]=str[i];
                str1[p][j++]='\0';
                strcat(str1[p],"lakh");
                p++;
                i=i-2;
                j=0;
            }
            else if(str[i-1]=='0'&&str[i]!='0'){
                str1[p][j]=str[i];
                str1[p][j++]='\0';
                strcat(str1[p],"lakh");
                p++;
                i=i-2;
                j=0;
            }
            else i=i-2;
            }
            if(i==7){
                       if(str1[i-1]!='0'&&i-1!=-1){
                str1[p][j]=str[i-1];
                str1[p][j+1]=str[i];
                str1[p][j++]='\0';
                strcat(str1[p],"kuti");
                p++;
                i=i-2;
                j=0;
            }
            else if(str[i-1]=='0'&&str[i]!='0'){
                str1[p][j]=str[i];
                str1[p][j++]='\0';
                strcat(str1[p],"kuti");
                p++;
                i=i-2;
                j=0;
            }
            else if(str[i-1]=='0'&&str[i]=='0'){
                strcpy(str1[p],"kuti");
                p++;
                i=i-2;
            }
            }
            if(i==0)

        }

    }

}
