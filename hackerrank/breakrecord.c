#include <stdio.h>

int main()
{
	int n, min = 0, max = 0, mincount = 0, maxcount = 0;
	scanf("%d", &n);	//number of games
	int scores[n];

	//scores input
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &scores[i]);
	}

	//first score saved
	max = scores[0];
	min = scores[0];

	//record
	for (int i = 1; i < n; i++)
	{
		if (scores[i] > max)
		{
			max = scores[i];
			maxcount++;
		}
		else if (scores[i] < min)
		{
			min = scores[i];
			mincount++;
		}
	}

	printf("%d %d\n", maxcount, mincount);

	return 0;
}
