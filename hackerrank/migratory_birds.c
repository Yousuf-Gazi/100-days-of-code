#include <stdio.h>

int main()
{
	int n, max_freq, type, btype_freq[5] = {0};
	scanf("%d", &n);		//number of birds
	int arr[n];
	
	//finding out the frequency of each type
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &type);

		if (type == 1)
		{
			btype_freq[0]++;
		}
		if (type == 2)
		{
			btype_freq[1]++;
		}
		if (type == 3)
		{
			btype_freq[2]++;
		}
		if (type == 4)
		{
			btype_freq[3]++;
		}
		if (type == 5)
		{
			btype_freq[4]++;
		}
	}

	//finding out the max frequency
	max_freq =  btype_freq[0];
	int answer = 1;
	for (int i = 1; i < 5; i++)
	{
		if (max_freq < btype_freq[i])
		{
			max_freq = btype_freq[i];
			answer = i + 1;
		}
	}

	printf("%d\n", answer);

	return 0;
}
