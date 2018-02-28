#include<stdio.h>

int c[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

void animation();
void grid();
void input();
int check(int);
void clean();
void wrongchoice();
int winner();
void choice();
void delay(int);
void color1();
void color2();

int main()
{
	color1();
	clean();
	animation();
	grid();
	input();
	choice();	
}

void color1()
{
	system("color 03");
}

void color2()
{
	system("color 02");
}

void animation()
{
	char c ;
	printf("                        welcome to the game -: TIC TAC TOE\n");
	delay(20000);
	printf("                             this is a 2 player game\n");
	delay(20000);
	printf("   you can play this game with the help of number pad given on the right side of your computer\n\n");
	printf("                             press enter to continue\n                             ");
	fflush(stdin);
	c = getchar();
}

void grid()
{
	printf("\n");
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("                             ");
		for(j=0;j<5;j++)
		{
			if(i%2 == 0)
			{
				if(j%2 != 0)
					printf(" | ");
				else if(c[i][j] == 1)
					printf(" o ");
				else if(c[i][j] == 2)
					printf(" x ");
				else
					printf("   ");
			}
			else
			{
				if(j%2 == 0)
					printf(" __");
				else if(c[i][j] == 1)
					printf(" o ");
				else if(c[i][j] == 2)
					printf(" x ");
				else
					printf("   ");
			}
		}
		if(i%2 != 0)
			printf("\n");
		printf("\n");
	}
	printf("\n\n");
}

void input()
{
	int i = 0,l,m,number,win;
	while((win = winner()) == 0)
	{
		if(i%2 == 0)
			printf("                              player 1 has the turn \n                  enter the place where you want to enter a O\n");
		else
			printf("                              player 2 has the turn \n                  enter the place where you want to enter a X\n");
		scanf("%d",&number);
		if(check(number) == -1)
		{
			wrongchoice();
			continue;
		}
		if(i%2 == 0)
		{
			if(number == 7)
				c[0][0] = 1;
			else if(number == 8)
				c[0][2] = 1;
			else if(number == 9)
				c[0][4] = 1;
			else if(number == 4)
				c[2][0] = 1;
			else if(number == 5)
				c[2][2] = 1;
			else if(number == 6)
				c[2][4] = 1;
			else if(number == 1)
				c[4][0] = 1;
			else if(number == 2)
				c[4][2] = 1;
			else if(number == 3)
				c[4][4] = 1;
		}
		else
		{
			if(number == 7)
				c[0][0] = 2;
			else if(number == 8)
				c[0][2] = 2;
			else if(number == 9)
				c[0][4] = 2;
			else if(number == 4)
				c[2][0] = 2;
			else if(number == 5)
				c[2][2] = 2;
			else if(number == 6)
				c[2][4] = 2;
			else if(number == 1)
				c[4][0] = 2;
			else if(number == 2)
				c[4][2] = 2;
			else if(number == 3)
				c[4][4] = 2;
		}
		i++;
		clean();
		color2();
		grid();
	}
	if(win == 1)
		printf("\nPLAYER 1 HAS WON THE GAME \n \n");
	if(win == 2)
		printf("\nPLAYER 2 HAS WON THE GAME \n\n");
	if(win == -1)
		printf("\nthe game has finished on a tie \n");
}

int winner()
{
	if((c[0][0] == 1)&&(c[0][2] == 1)&&(c[0][4] == 1))
		return 1;
	else if((c[2][0] == 1)&&(c[2][2] == 1)&&(c[2][4] == 1))
		return 1;
	else if((c[4][0] == 1)&&(c[4][2] == 1)&&(c[4][4] == 1))
		return 1;
	else if((c[0][0] == 1)&&(c[2][0] == 1)&&(c[4][0] == 1))
		return 1;
	else if((c[0][2] == 1)&&(c[2][2] == 1)&&(c[4][2] == 1))
		return 1;
	else if((c[0][4] == 1)&&(c[2][4] == 1)&&(c[4][4] == 1))
		return 1;
	else if((c[0][0] == 1)&&(c[2][2] == 1)&&(c[4][4] == 1))
		return 1;
	else if((c[0][4] == 1)&&(c[2][2] == 1)&&(c[4][0] == 1))
		return 1;
	else if((c[0][0] == 2)&&(c[0][2] == 2)&&(c[0][4] == 2))
		return 2;
	else if((c[2][0] == 2)&&(c[2][2] == 2)&&(c[2][4] == 2))
		return 2;
	else if((c[4][0] == 2)&&(c[4][2] == 2)&&(c[4][4] == 2))
		return 2;
	else if((c[0][0] == 2)&&(c[2][0] == 2)&&(c[4][0] == 2))
		return 2;
	else if((c[0][2] == 2)&&(c[2][2] == 2)&&(c[4][2] == 2))
		return 2;
	else if((c[0][4] == 2)&&(c[2][4] == 2)&&(c[4][4] == 2))
		return 2;
	else if((c[0][0] == 2)&&(c[2][2] == 2)&&(c[4][4] == 2))
		return 2;
	else if((c[0][4] == 2)&&(c[2][2] == 2)&&(c[4][0] == 2))
		return 2;
	else if((c[0][0] != 0)&&(c[0][2] != 0)&&(c[0][4] != 0))
	{
		if((c[2][0] != 0)&&(c[2][2] != 0)&&(c[2][4] != 0))
		{
			if((c[4][0] != 0)&&(c[4][2] != 0)&&(c[4][4] != 0))
				return -1;
		}
	}
	else
		return 0;
}
int check(int n)
{
	if((n == 9)&&(c[0][4] == 0))
		return 1;
	else if((n == 8)&&(c[0][2] == 0))
		return 1;
	else if((n == 7)&&(c[0][0] == 0))
		return 1;
	else if((n == 6)&&(c[2][4] == 0))
		return 1;
	else if((n == 5)&&(c[2][2] == 0))
		return 1;
	else if((n == 4)&&(c[2][0] == 0))
		return 1;
	else if((n == 3)&&(c[4][4] == 0))
		return 1;
	else if((n == 2)&&(c[4][2] == 0))
		return 1;
	else if((n == 1)&&(c[4][0] == 0))
		return 1;
	else 
		return -1;
}

void choice()
{
	int choice,l,m;
	do
	{
		printf("enter your choice\n1)continue the game\n2)can't play now\n");
		scanf("%d",&choice);
		if(choice == 1)
		{
			for(l=0;l<5;l++)
			{
				for(m=0;m<5;m++)
				{
					c[l][m] = 0;
				}
			}
			main();
		}
		else if((choice != 1)&&(choice != 2))
			printf("WRONG CHOICE!!!\n\ntry again\n");
	}while((choice != 1)&&(choice != 2));
}
void wrongchoice()
{
	printf("you have either entered a wrong key or there is already a X or a O at that place\n\n");
}

void clean()
{
	system("@cls||clear");
}

void delay(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{

		}
	}
}


//made by -> megatron-3
//-------------------------------------------------------------------------