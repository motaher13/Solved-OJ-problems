
#include <stdio.h>
char str[] = "BCAA";
int n;

void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int shouldSwap(int start, int curr)
{
    int i;
    for(i=start;i<curr;i++)
    {
        if(str[i]==str[curr])
            return 0;
    }
    return 1;
}

// Prints all distinct permutations in str[0..n-1]
void findPermutations(int i)
{
    if(i>=n)
    {
        printf("%s\n",str);
        return;
    }
    int j;
    for(j=i;j<n;j++)
    {
        int check=shouldSwap(i,j);
        if(check)
        {
            swap(str+i,str+j);
            findPermutations(i+1);
            swap(str+i,str+j);

        }
    }
}

int main()
{

    n = strlen(str);
    findPermutations(0);
    return 0;
}
