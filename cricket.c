/**
 A cricket game to play for fun 
 */

#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int total_target_run,player,bot;
    int ball,player_run;
    srand(time(NULL));
    total_target_run= rand() % 35+1;
    printf("Total Target= %d\n ",total_target_run);
    for(ball=1; ball<=6; ball++)
    {
        printf("choose a number betweeen 1 and 6=\n ");
        scanf("%d",&player);
            bot = rand() % 6;
    
    if (player<1 || player > 6)
    {
        printf("Invalid number\n");
    }
    bot = rand() % 6+1;
    if(bot == player)
    {
        printf("you are out\n");
        break;
    }
    else
    {
        player_run += player;
        printf("You scored %d run\n",player);
    }
    }
    printf("\nGame Over!\n");
    printf("Your final score = %d\n", player_run);

    if (player_run > total_target_run)
    {
        printf("You won!\n");
    }
    else if(player_run == total_target_run)
    {
        printf("Its a draw!\n");
    }
    else
    {
        printf("You lost!\n");
    }

    return 0;

}                                                                                                                                  
