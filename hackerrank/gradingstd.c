#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);		//number of students

	//grade input
	int grades[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &grades[i]);
	}

	//grade check
	for (i = 0; i < n; i++)
	{
		if (grades[i] < 38 || 5 - grades[i] % 5 > 2)
		{
			printf("%d\n", grades[i]);
		}
		else
		{
			grades[i] += (5 - grades[i] % 5);
			printf("%d\n", grades[i]);
		}
	}

	return 0;
}
