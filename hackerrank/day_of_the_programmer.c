#include <stdio.h>

int main()
{
	int yy, dd;
	scanf("%d", &yy);

	//for julian calendar
	if (yy >= 1700 && yy <= 1917)
	{
		//for leap year
		if ((yy % 4) == 0)
		{
			//dd = 256 - 244 = 12;
			printf("12.09.%d\n", yy);
		}
		//without leap year
		else
		{
			//dd = 256 - 243 = 13;
			printf("13.09.%d\n", yy);
		}
	}
	//for gregorian calendar
	else if (yy > 1917)
	{
		//for leap year
		if ((yy % 400) == 0 || (yy % 4) == 0 && (yy % 100) != 0)
		{
			printf("12.09.%d\n", yy);
		}
		//for 1918 they day russia changed to gregorian
		else if (yy == 1918)
		{
			//31+15+31+30+31+30+31+31=230,(256-230)=26
			printf("26.09.%d\n", yy);
		}
		//without leap year
		else
		{
			printf("13.09.%d\n", yy);
		}
	}

	return 0;
}
