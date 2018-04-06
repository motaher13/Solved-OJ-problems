#include <stdio.h>
#include <string.h>

char character[22]={"AEHIJLMOSTUVWXYZ12358"}, reverse[22]={"A3HILJMO2TUVWXY51SEZ8"};
    char sentence[200], rev_sentence[200];

    int flag_palin, flag_rev, i, j, k, lenth_sentence, lenth_reverse, rev_index;


void palin_check(void)
{
    lenth_sentence=strlen(sentence);

    for(i=0, k=(lenth_sentence-1), flag_palin=1; i<lenth_sentence; i++, k--)
    {
        if(sentence[i]!=sentence[k])
        {
                flag_palin=0;
                break;
        }
    }
    return;
}

void reverse_check(void)
{
    for(i=0, rev_index=0, flag_rev=1; i<lenth_sentence; i++)
    {
        for(k=0; k<21; k++)
        {
            if(sentence[i]==character[k])
            {
                rev_sentence[rev_index++]=reverse[k];
            }
    }
    rev_sentence[rev_index]='';

    if(flag_rev==1)                                                                 /*after getting reverse sentence , this is for checking sentence and rev_sentence are palindrome or not*/
        {
            for(i=0, k=(lenth_sentence-1); i<lenth_sentence; i++, k--)
            {
                if(sentence[i]!=rev_sentence[k])
                {
                    flag_rev=0;
                    break;
                }
            }
        }
    return;
}

int main()
{
    while(scanf("%s", sentence)==1)
    {
        flag_palin=1, flag_rev=1;

        palin_check();
        reverse_check();

        if(flag_palin==1 && flag_rev==1)
            printf("%s -- is a mirrored palindrome.\n", sentence);
        else if(flag_palin==0 && flag_rev==1)
            printf("%s -- is a mirrored string.\n", sentence);
        else if(flag_palin==1 && flag_rev==0)
            printf("%s -- is a regular palindrome.\n", sentence);
        else if(flag_palin==0 && flag_rev==0)
            printf("%s -- is not a palindrome.\n", sentence);

        printf("\n");       /*for an empty line after each output*/
    }
}
