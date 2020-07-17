#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct w {
    char en[25], xx[25];
} word;

word dict[1000002] = {0,0};

int cmp(const void *a, const void *b) {
    return strcmp(((word *)a)->xx,((word *)b)->xx);
}
int main() {
    int I=0, J;
    char INPUT[100], *p;
    word *q, QUERY;

    while(gets(INPUT)) {
        if (!strcmp(INPUT,""))
            break;
        p = strtok(INPUT," ");
        strcpy(dict[I].en,p);
        p = strtok(NULL," ");
        strcpy(dict[I].xx,p);
        I++;
    }

    qsort(dict,I,sizeof(word),cmp);

    while(scanf("%s",QUERY.xx)!=EOF) {
        q = bsearch(&QUERY,dict,I,sizeof(word),cmp);
        if (q!=NULL) {
            printf("%s\n",q->en);
        } else {
            printf("eh\n");
        }
    }

    return 0;
}
