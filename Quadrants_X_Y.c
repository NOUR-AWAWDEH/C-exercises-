//Задание_2_Вариант_1
/*
Quadrant I: positive x and positive y

Quadrant II: negative x and positive y

Quadrant III: negative x and negative y

Quadrant IV: positive x and negative y
*/

#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>


int main()
{
	int x,y;
	printf("What is x ? ");
	if (scanf("%d", &x))
	{
		printf("\nWhat is y ? ");
		if(scanf("%d", &y))
		{


		if (x > 0 && y > 0)
		{
			printf("\n(%d,%d)  is in the Quadrant I \n ", x, y);
		}
		else

			if (x < 0 && y>0)
			{
				printf("\n(%d,%d)  is in the Quadrant II \n", x, y);

			}
			else
				if (x < 0 && y < 0)
				{
					printf("\n(%d,%d)  is in the Quadrant III \n ", x, y);
				}
				else

					if (x > 0 && y < 0)
					{
						printf("\n(%d,%d)  is in the Quadrant IV \n ", x, y);
					}
					else {
						printf("\nNot Exist \n");

		
					}
		
			
		}
		else {
			printf("\nNot Exist \n");
		}
	}
	else {
		printf("\nNot Exist \n");
	}
	return 0;
}