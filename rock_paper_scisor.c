#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<MMsystem.h>
int comp,you;

int menu();
int computer();
void compare();

	void main()
{
	printf("\n*************************--ROCK PAPER SCISSOR--*********************************");
//	PlaySound(TEXT("win1.wav"),NULL,SND_SYNC);
	srand(time(0));
	
	printf("\n 1 - Select [rock]");
	printf("\n 2 - Select [paper]");
	printf("\n 3 - Select [scissor]");
	printf("\n 4 - Exit\n");
//  menu();
//	computer();
	compare();
	
}
int computer()
{
	int num;
	 num = (rand() %(3)+1);
	return(num);
}

void compare()
{
	int total = 10;
	int yourPoint = 0;
	int compPoint = 0;
	int i,you,n,j;
	
	
for(j=0;j<=10;j++)
	{
			
	for (i=1;i<=total;i++)
	{
		printf("\n--------------------------------------------------------------------------------");
		printf("\t\t\t----ROUND %d----",i);	
		
		comp = computer();
		printf("\n\nComputer turn: Already choosed\n");
		printf("Your turn: ");
		scanf("%d",&you);
		
		
		
		if (you == comp)
		{
			printf("\n\t\tIt's tie!");
			printf("\n 0 point for each\n");
			Beep(10000,600);
			
		}
		else if (you == 1 && comp == 2)
		{
			compPoint ++;
			printf("\n You choose: ROCK\n Computer choose: PAPER\n");
			printf("\n\t     Computer win");
			Beep(500,600);
		}
		
		
		else if (you == 1 && comp == 3)
		{
			yourPoint ++;
			printf("\n You choose: ROCK\n Computer choose: SCISSOR\n");
			printf("\n\t\tYou win");
			Beep(1500,600);
		}
		
		else if (you == 2 && comp == 1)
		{
			yourPoint ++;
			printf("\n You choose: PAPER\n Computer choose: ROCK\n");
			printf("\n\t\tYou win");
			Beep(1500,600);
		}
		
		else if (you == 2 && comp == 3)
		{
			compPoint ++;
			printf("\n You choose: PAPER\n Computer choose: SCISSOR\n");
			printf("\n\t     Computer win");
Beep(500,600);
		}
		
		else if (you == 3 && comp == 2)
		{
			yourPoint ++;
			printf("\n You choose: SCISSOR\n Computer choose: PAPER\n");
			printf("\n\t\tYou win");
			Beep(1500,600);
		}
		
		else if (you == 3 && comp == 1)
		{
			compPoint ++;
			printf("\n You choose:SCISSOR\n Computer choose: ROCK\n");
			printf("\n\t     Computer win");
Beep(500,600);
		}
		else if (you == 4)
		{
			exit(0);
		}
		else 
		{
			printf("\nInvalid input!");
			Beep(500,600);
		}
		printf("\n YOUR POINT: %d\t\t COMPUTER POINT: %d",yourPoint,compPoint);
		printf("\n\n\t\t(%d chance remaining out of %d)",total-i,total);
	}
	
	if (yourPoint == compPoint)
			{
				printf("\n\n-------------------------------IT'S TIE!---------------------------------------");	
			}
			else if (yourPoint > compPoint)
			{
				printf("\n\n---------------------------------YOU WIN!---------------------------------------");
			}
			else 
			{
				printf("\n\n------------------------------COMPUTER WIN!-------------------------------------");
			}
			
	printf("\n   FINAL SCORE\n\n");
	printf("   Your score: %d\n",yourPoint);
	printf("   Computer score: %d\n",compPoint);
printf("\n******************************--GAME OVER!--************************************");
printf("\n\n 1-[NEW GAME]\n 2-[QUIT GAME]\n");
scanf("%d",&n);
if (n == 2)
{
	exit(0);
}
}
}