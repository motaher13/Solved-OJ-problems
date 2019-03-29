#include <stdio.h>
int main()
{
    int ind_score,pak_score;
    printf("enter pak score:");
    scanf("%d",&pak_score);
    printf("enter ind score");
    scanf("%d",&ind_score);
    if(ind_score>pak_score)printf("motherfucker india has won the game ");
    if(ind_score<pak_score)printf("cruel pakistan has won the build up game as they had no chance of winning so it was build up.");
    if(ind_score==pak_score)printf("the match was drown to keep the supporters calm of both teams");
    return 0;
}
