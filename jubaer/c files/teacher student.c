#include <stdio.h>
#include <string.h>
void func(char pass[]){
     char ch;
     int i=0;
     while(1){
       ch=getch();
       if(ch=='\r')break;
       putchar("*");
       pass[i++]=ch;
     }
      pass[i]='\0';

}
struct birthday{
       int day;
       int month;
       int year;
};
struct sex{
       int male;
       int female;

};
struct teacher{
       char f_name[90];
       char l_name[90];
       char username[90];
       char password[12];
       int salary;
       struct birthday birth;
       struct sex sexy;
};
struct student{
       char f_name[90];
       char l_name[90];
       char username[90];
       char password[12];
       struct sex sexy;
       struct birthday birth;

};
int main()
{
    struct student user2;
    struct teacher user1;

    char passck[12];
    char sexck[10];
    printf("enter your first name\n ");
    scanf("%s",user1.f_name);
    printf("enter your last name\n ");
    scanf("%s",user1.l_name);
    printf("enter your useusername\n ");
    scanf("%s",user1.username);
    printf("enter your password\n ");
    func(user1.password);
    printf("renter your passwor\n ");
   func(passck);
    if(strcmp(user1.password,passck)!=0){
        printf("wrong");
       return 0;
    }
    printf("enter your birth date\n ");
    scanf("%d %d %d",&user1.birth.day,&user1.birth.month,&user1.birth.year);
    printf("enter your sex\n(if male press m or press f) ");
    scanf("%s",sexck);
    if(strcmp(sexck,"m")==0){
      user1.sexy.male=1;
      user1.sexy.female=0;
    }
    else if(strcmp(sexck,"f")==0){
     user1.sexy.female=1;
      user1.sexy.male=0;
    }
    printf("add your salary");
    scanf("%d",&user1.salary);
    printf("first name\t %s\n",user1.f_name);
    printf("second name\t %s\n",user1.l_name);
    printf("user name\t:%s\n",user1.username);
    printf("password\t%s\n",user1.password);
    printf("day:%d\t month:%d\t year:%d\n",user1.birth.day,user1.birth.month,user1.birth.year);
    if(user1.sexy.male==1){printf("you are male");
    }
    else if(user1.sexy.female==1){printf("female");
    }
    printf("%d",user1.salary);
     printf("enter your first name\n ");
    scanf("%s",user2.f_name);
    printf("enter your last name\n ");
    scanf("%s",user2.l_name);
    printf("enter your useusername\n ");
    scanf("%s",user2.username);
    printf("enter your password\n ");
    func(user2.password);
    printf("renter your passwor\n ");
    func(passck);
    if(strcmp(user2.password,passck)!=0){
        printf("wrong");
       return;
    }
    printf("enter your birth date\n ");
    scanf("%d %d %d",&user2.birth.day,&user2.birth.month,&user2.birth.year);
    printf("enter your sex\n(if male press m or press f) ");
    scanf("%s",sexck);
    if(strcmp(sexck,"m")==0){
      user2.sexy.male=1;
      user2.sexy.female=0;
    }
    else if(strcmp(sexck,"f")==0){
     user2.sexy.female=1;
      user2.sexy.male=0;
    }
    printf("first name\t %s\n",user2.f_name);
    printf("second name\t %s\n",user2.l_name);
    printf("user name\t:%s\n",user2.username);
    printf("password\t%s\n",user2.password);
    printf("day:%d\t month:%d\t year:%d\n",user2.birth.day,user2.birth.month,user2.birth.year);
    if(user2.sexy.male==1){printf("you are male");
    }
    else if(user2.sexy.female==1){printf("female");
    }

    return 0;
}
