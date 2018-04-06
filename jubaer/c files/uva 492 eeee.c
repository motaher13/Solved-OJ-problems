#include <stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char ch,re,st,kt;
    i=0;
    while(1){
    ch=getchar();

   if(ch==EOF)break;
    else if((i==0)&&(((int)ch>64&&(int)ch<91)||((int)ch>96&&(int)ch<123))){
    re=ch;
    if(re=='A'||re=='a'||re=='e'||re=='E'||re=='o'||re=='O'||re=='i'||re=='I'||re=='U'||re=='u'){
    printf("%c",re);
    }
    i++;
    }
    else if((i>0)&&(((int)ch>64&&(int)ch<91)||((int)ch>96&&(int)ch<123))){
    printf("%c",ch);
    i++;
    }
    else if((((int)ch<48))&&(re!='A'&&re!='a'&&re!='e'&&re!='E'&&re!='o'&&re!='O'&&re!='i'&&re!='I'&&re!='U'&&re!='u')){
    if(i>0)
    printf("%cay%c",re,ch);
    else if(i==0)printf("%c",ch);
    i=0;
    re='\0';
continue;
    }
    else if((((int)ch>47)&&((int)ch<65))&&(re!='A'&&re!='a'&&re!='e'&&re!='E'&&re!='o'&&re!='O'&&re!='i'&&re!='I'&&re!='U'&&re!='u')){
    if(i>0) printf("%cay%c",re,ch);
    else if(i==0)printf("%c",ch);
    i=0;
    re='\0';
  continue;
    }
     else if((((int)ch>90)&&((int)ch<97))&&(re!='A'&&re!='a'&&re!='e'&&re!='E'&&re!='o'&&re!='O'&&re!='i'&&re!='I'&&re!='U'&&re!='u')){
    if(i>0)printf("%cay%c",re,ch);

    else if(i==0)printf("%c",ch);
    i=0;
     re='\0';
    continue;
    }
     else if((((int)ch>122)&&((int)ch<128))&&(re!='A'&&re!='a'&&re!='e'&&re!='E'&&re!='o'&&re!='O'&&re!='i'&&re!='I'&&re!='U'&&re!='u')){
    if(i>0)printf("%cay%c",re,ch);

    else if(i==0)printf("%c",ch);
    i=0;
     re='\0';
    continue;
    }
    else if(((int)ch<48)){
    if(i>0)
    printf("ay%c",ch);
    else if(i==0)printf("%c",ch);
    i=0;
   continue;

    }
    else if(((int)ch>47)&&((int)ch)<65){
    kt=ch;
    if(i>0)
    printf("ay%c",ch);
    else if(i==0)printf("%c",ch);
    i=0;
   continue;
    }

      else if(((int)ch>91)&&((int)ch)<97){
    kt=ch;
    if(i>0)printf("ay%c",ch);
    else if(i==0)printf("%c",ch);
    i=0;
    continue;
    }
      else if(((int)ch>122)&&((int)ch)<128){
    kt=ch;
    if(i>0)printf("ay%c",ch);
    else if(i==0)printf("%c",ch);
    i=0;
    continue;
    }
    }
    return 0;
}
