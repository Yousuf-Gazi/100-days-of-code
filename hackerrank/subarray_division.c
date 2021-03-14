#include <stdio.h>

int main()
{
	int n, d, m, ways = 0, sum = 0, length = 0;
	//the numbers on each of the squares of chocolate
	scanf("%d", &n);

	//the numbers of chocolate square
	int s[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	//d = sum, m = length
	scanf("%d %d", &d, &m);

	for (int i = 0; i < n; i++)
	{
		//getting the length of the segment
		for (int j = i; j < n; j++)
		{
			if (length < m)
			{
				sum += s[j];
				length++;
			}
		}
		//getting the ways
		if (sum == d)
		{
			ways++;
		}

		sum = 0;
		length = 0;
	}

	printf("%d\n", ways);

	return 0;
}
