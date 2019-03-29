#include <stdio.h>
#include <string.h>
int p,q,r;
char name[6][10];
int id[6];

int n;

double cgpa[6];
char vai[12];
int t;
double f;
void input(char name[][10],int id[],double cgpa[]){



int d;
for(d=0;d<n;d++){
    scanf("%s %d %lf",name[d],&id[d],&cgpa[d]);
}

}
void student(char name[][10],int id[],double cgpa[]){
     int i,j,k;
     for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
     if(strlen(name[i])>strlen(name[j])){
     strcpy(vai,name[i]);
     strcpy(name[i],name[j]);
     strcpy(name[j],vai);

     t=id[i];
     id[i]=id[j];
     id[j]=t;

     f=cgpa[i];
     cgpa[i]=cgpa[j];
     cgpa[j]=f;
     }
     else if(strcmp(name[i],name[j])>0){
               strcpy(vai,name[i]);
     strcpy(name[i],name[j]);
     strcpy(name[j],vai);

     t=id[i];
     id[i]=id[j];
     id[j]=t;

     f=cgpa[i];
     cgpa[i]=cgpa[j];
     cgpa[j]=f;



             }
     }
     }
     for(i=0;i<n;i++){
            printf("%s\t%d\t%lf",name[i],id[i],cgpa[i]);
             printf("\n");
     }

}
void sir(char name[][10],int id[],double cgpa[]){

       int i,j,k;

 for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
     if(id[i]>id[j]){
     strcpy(vai,name[i]);
     strcpy(name[i],name[j]);
     strcpy(name[j],vai);

     t=id[i];
     id[i]=id[j];
     id[j]=t;

     f=cgpa[i];

     cgpa[i]=cgpa[j];
     cgpa[j]=f;
     }
     }
     }
     for(i=0;i<n;i++){
            printf("%d\t%s\t%lf",id[i],name[i],cgpa[i]);
             printf("\n");
     }
     void action(char name[][10],int id[],double cgpa[]){
     char ch;
     scanf("%c",&ch);
       if(ch=='a'){
    student(name,id,cgpa);
     }
     else if(ch=='b'){
        sir(name,id,cgpa);
     }


     }


}
int main(){


   int n;
   scanf("%d",&n);
    input(name,id,cgpa);
    action(name,id,cgpa);
  //action(
  //scanf("%d",&w);
 // printf("%d",w);



     //scanf("%c",&ch);

    return 0;
}
