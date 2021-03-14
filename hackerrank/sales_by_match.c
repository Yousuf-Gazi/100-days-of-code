#include <stdio.h>

int main()
{
	int n, pair = 0;
	scanf("%d", &n);		//number of socks, n

	//the colors of each sock
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}

	//pair matching
	for (int i = 0; i < n; i++)
	{
		while (ar[i] == 0)
		{
			i++;
		}

		//second sock for pairing
		for (int j = i + 1; j < n; j++)
		{
			while (ar[j] == 0)
			{
				j++;
			}
			if (ar[i] == ar[j])
			{
				pair++;
				ar[i] = 0;
				ar[j] = 0;
			}
		}
	}

	printf("%d\n", pair);

	return 0;
}
