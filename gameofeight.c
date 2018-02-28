#include<stdio.h>

int c[5][5] = {{8,0,7,0,6},{0,0,0,0,0},{5,0,4,0,3},{0,0,0,0,0},{2,0,1,0,0}};
int move_no = 0;

void animation();
void choice();
void delay(int);
void clean();
void grid();
void change(int,int);
void wrongchoice();
int check(int,int);
int winner();
void input();
void intialize();

int main()
{
	intialize();
	clean();
	animation();
	grid();
	input();
	choice();
}

void animation()
{
	char c ;
	printf("                        welcome to the game -: GAME OF EIGHT\n");
	delay(20000);
	printf("                             this is a 1 player game\n");
	delay(20000);
	printf("   you can play this game with the help of number pad given on the right side of your computer\n\n");  	
	delay(20000);
	printf("                        here are some simple rules for this game\n");
	delay(10000);
	printf("                    1)you have to arrange the given grid in proper order\n");
	delay(10000);
	printf("             2)for changing position you can change position by giving from and to\n");
	delay(10000);
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
				else if(c[i][j] != 0)
				{
					if(i%2 != 0)
						printf("   ");
					else
						printf(" %d ",c[i][j]);
				}
				else
					printf("   ");
			}
			else
			{
				if(j%2 == 0)
					printf(" __");
				else if(c[i][j] != 1)
				{
					if(i%2 != 0)
						printf("   ");
					else
						printf(" %d ",c[i][j]);
				}
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
	int win,n,m;
	while((win = winner()) != 0)
	{
		move_no++;
		printf("MOVE NUMBER -: %d\n",move_no);
		printf("enter the place from where you want pick the number\n");
		scanf("%d",&n);
		printf("enter the place where you want to keep the number\n");
		scanf("%d",&m);
		if(check(n,m) == 0)
		{
			wrongchoice();
			move_no--;
			continue;
		}
		else
		{
			change(n,m);
		}
		clean();
		grid();
	}
}

int check(int n,int m)
{
	int test1 = 0,test2 = 0;
	if(m == 1)
	{
		if(c[4][0] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 2)
	{
		if(c[4][2] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 3)
	{
		if(c[4][4] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 4)
	{
		if(c[2][0] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 5)
	{
		if(c[2][2] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 6)
	{
		if(c[2][4] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 7)
	{
		if(c[0][0] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 8)
	{
		if(c[0][2] == 0)
		{
			test1 = 1;
		}
	}
	else if(m == 9)
	{
		if(c[0][4] == 0)
		{
			test1 = 1;
		}
	}
	if(n == 1)
	{
		if((m == 4)||(m == 2))
		{
			test2 = 1;
		}
	}
	else if(n == 2)
	{
		if((m == 1)||(m == 5)||(m == 3))
		{
			test2 = 1;
		}
	}
	else if(n == 3)
	{
		if((m == 6)||(m == 2))
		{
			test2 = 1;
		}
	}
	else if(n == 4)
	{
		if((m == 1)||(m == 5)||(m == 7))
		{
			test2 = 1;
		}
	}
	else if(n == 5)
	{
		if((m == 2)||(m == 4)||(m == 6)||(m == 8))
		{
			test2 = 1;
		}
	}
	else if(n == 6)
	{
		if((m == 9)||(m == 5)||(m == 3))
		{
			test2 = 1;
		}
	}
	else if(n == 7)
	{
		if((m == 4)||(m == 8))
		{
			test2 = 1;
		}
	}
	else if(n == 8)
	{
		if((m == 7)||(m == 5)||(m == 9))
		{
			test2 = 1;
		}
	}
	else if(n == 9)
	{
		if((m == 6)||(m == 8))
		{
			test2 = 1;
		}
	}
	//printf("%d\n%d\n",test1,test2);
	if((test1 == 1)&&(test2 == 1))
		return 1;
	else 
		return 0;
}

void change(int n,int m)
{
	if(n == 1)
	{
		if(m == 4)
		{
			c[2][0] = c[4][0];
			c[4][0] = 0;
		}
		else if(m == 2)
		{
			c[4][2] = c[4][0];
			c[4][0] = 0;
		}
	}
	else if(n == 2)
	{
		if(m == 1)
		{
			c[4][0] = c[4][2];
			c[4][2] = 0;
		}
		else if(m == 5)
		{
			c[2][2] = c[4][2];
			c[4][2] = 0;
		}
		else if(m == 3)
		{
			c[4][4] = c[4][2];
			c[4][2] = 0;
		}
	}
	else if(n == 3)
	{
		if(m == 6)
		{
			c[2][4] = c[4][4];
			c[4][4] = 0;
		}
		else if(m == 2)
		{
			c[4][2] = c[4][4];
			c[4][4] = 0;
		}
	}
	else if(n == 4)
	{
		if(m == 7)
		{
			c[0][0] = c[2][0];
			c[2][0] = 0;
		}
		else if(m == 5)
		{
			c[2][2] = c[2][0];
			c[2][0] = 0;
		}
		else if(m == 1)
		{
			c[4][0] = c[2][0];
			c[2][0] = 0;
		}
	}
	else if(n == 5)
	{
		if(m == 4)
		{
			c[2][0] = c[2][2];
			c[2][2] = 0;
		}
		else if(m == 2)
		{
			c[4][2] = c[2][2];
			c[2][2] = 0;
		}
		else if(m == 8)
		{
			c[0][2] = c[2][2];
			c[2][2] = 0;
		}
		else if(m == 6)
		{
			c[2][4] = c[2][2];
			c[2][2] = 0;
		}
	}
	else if(n == 6)
	{
		if(m == 9)
		{
			c[0][4] = c[2][4];
			c[2][4] = 0;
		}
		else if(m == 5)
		{
			c[2][2] = c[2][4];
			c[2][4] = 0;
		}
		else if(m == 3)
		{
			c[4][4] = c[2][4];
			c[2][4] = 0;
		}
	}
	else if(n == 7)
	{
		if(m == 4)
		{
			c[2][0] = c[0][0];
			c[0][0] = 0;
		}
		else if(m == 8)
		{
			c[0][2] = c[0][0];
			c[0][0] = 0;
		}
	}
	else if(n == 8)
	{
		if(m == 7)
		{
			c[0][0] = c[0][2];
			c[0][2] = 0;
		}
		else if(m == 5)
		{
			c[2][2] = c[0][2];
			c[0][2] = 0;
		}
		else if(m == 9)
		{
			c[0][4] = c[0][2];
			c[0][2] = 0;
		}
	}
	else if(n == 9)
	{
		if(m == 8)
		{
			c[0][2] = c[0][4];
			c[0][4] = 0;
		}
		else if(m == 6)
		{
			c[0][2] = c[0][4];
			c[0][4] = 0;
		}
	}

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

void intialize()
{
	move_no = 0;
	c[5][5] = ((8,0,7,0,6),(0,0,0,0,0),(5,0,4,0,3),(0,0,0,0,0),(2,0,1,0,0));
}
void clean()
{
	system("@cls||clear");
}

void wrongchoice()
{
	printf("now that was an invalid move\n\n");
}

int winner()
{
	if((c[0][0] == 1)&&(c[0][2] == 2)&&(c[0][4] == 3))
	{
		if((c[2][0] == 4)&&(c[2][2] == 5)&&(c[2][4] == 6))
		{
			if((c[4][0] == 7)&&(c[4][2] == 8))
				return 0;
		}
	}
	return 1;
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