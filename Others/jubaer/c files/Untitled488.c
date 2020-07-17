#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[90]="this is a file system ";
    FILE *fp;
    char *p;
    int i;
    if((fp=fopen("myfile","w"))==NULL){
      printf("cannot open file.\n");
      exit(1);
    }
    p=str;
    while(*p){
          if(putc(*p,fp)==EOF){
            printf("error writing file\n");
            exit(1);
          }
          p++;
          }
          fclose(fp);
          if((fp=fopen("myfile","r"))==NULL){
            printf("cannot open file");
            exit(1);


          }
          for(;;){

            i=fgetc(fp);
            if(i==EOF)break;
            putchar(i);
          }
          fclose(fp);




    return 0;
}
