#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num,guess,nguesses=1;
	srand(time(0));
	num=rand()%100+1;
	//printf("the number is %d\n",num);//if you want to the number
	printf("Let'Play guess game :")
	do
	  {
		printf("guess the number b/w 1 to 100\n");
		scanf("%d",&guess);
		if(guess>num)
		{
			printf("Please try lower number:\n ");
			
		}
		else if(guess<num)
		{
			printf("Please try higher number:\n");
			
		}
		else
		{
			printf("You guessed in %d attempts\n",nguesses);
			printf("Performance report is  ");
			if(nguesses==1)
				printf("Sharp Attempt");
			else if(nguesses==2)
				printf("Best Attempt");
			else if(nguesses==3)
				printf("Better Attempt");
			else if(nguesses==4)
				printf("Nice Attempt");
			else
			printf("try for nice one");
		}
			nguesses++;
	  }while(guess!=num);
      return 0;	  
	
}