#include <stdio.h>

int main()
{
	int n, k, pairs = 0, sum = 0;
	scanf("%d %d", &n, &k);		//number of input, n and divisible number, k

	//array input
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//number of pairs
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum = 0;
			sum = arr[i] + arr[j];

			if (sum % k == 0)
			{
				pairs++;
			}
		}
	}

	printf("%d\n", pairs);
	
	return 0;
}
