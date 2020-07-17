#include<stdio.h>
int sort(int n,int *x)
{
    int i,j,k;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(*(x+j)>*(x+i))
            {
                k=*(x+j);
                *(x+j)=*(x+i);
                *(x+i)=k;
            }}}
}

int main()
{
    int i,j,n,k,*ara;
    scanf("%d",&n);

    ara=(int *) malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",ara+i);

    sort (n,ara);

    for(i=0;i<n;i++)
        printf("%d\n",*(ara+i));
}
