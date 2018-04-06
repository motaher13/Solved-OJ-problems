#include <stdio.h>
struct account{
       char first_name[45];
       char last_name[45];
       char username[45];
       char password[45];

       struct birthday{
       int day;
       int month;
       int year;
       }birth;
       struct Sex{
       int male;
       int female;
       }sex;

};
void pass_eg(char pass[]){
     int i=0 ;
     char ch;
     while(1){
     ch=getch();
     if(ch==13)break;
     putchar("*");
     pass[i++]=ch;
     }
     pass[i]='\0';


}


int main(){
    struct account member;
    char passck[45];
    char sexck[45];
    printf("enter your first name");
    scanf("%s",member.first_name);
    printf("enter your last name");
        scanf("%s",member.last_name);
    printf("enter your useer name");
        scanf("%s",member.username);
    printf("enter your password");
       pass_eg(member.password);
    printf("reenter your password name");
        pass_eg(passck);
        if(strcmp(member.password,passck)!=0){
            printf("wrong");
            return 0;
        }
    printf("enter your sex (if male press m else press f)");
        scanf("%s",sexck);
        if(strcmp(sexck,"m")==0){
            member.sex.male=1;
            member.sex.female=0;
        }
        else if(strcmp(sexck,"f")==0){
               member.sex.male=0;
               member.sex.female=1;
        }
        else{
            printf("wrong entry");
        }
    printf("enter your birth date");
    printf("day:\tmonth\tyear");
    scanf("%d%d%d",&member.birth.day,&member.birth.month,&member.birth.year);

    printf("first name %s",member.first_name);
    printf("last name %s",member.last_name);
     printf("username name %s",member.username);
     printf("password %s",member.password);
     printf("birth date %d\t%d\t%d\n",member.birth.day,member.birth.month,member.birth.year);
     printf("sex:");
     if(member.sex.male==1){
            printf("male");
     }
     else if(member.sex.female==1){
            printf("female");
     }
     return 0;
}
