/**
 A cricket game to play for fun 
 */

#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int total_target_run,player,bot,bot2;
    char choose;
    int ball,player_run;
    srand(time(NULL));
    do
    {
        total_target_run= rand() % 35+1;
        printf("Total Target= %d\n ",total_target_run+1);
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
        bot2 = rand() % 6+1;
        if(bot == player || bot2 == player)
        {
            printf("you are out\n");
            break;
        }
        else
        {
            player_run = player + player_run ;
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
        printf("Do you want to continue? (y/n)= \n");
        scanf("%s",&choose);
    }
    while (choose == 'y' || choose == 'Y');
        printf("Thanks for playing\n");
    

    return 0;
        
        



}
