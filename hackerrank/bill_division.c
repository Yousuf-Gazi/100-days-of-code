#include <stdio.h>

int main()
{
	int n, k, b, sum = 0, owe;		//removed item, k
	scanf("%d %d", &n, &k);			//size of bill array, n
	//cost of each item
	int bill[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &bill[i]);
	}

	scanf("%d", &b);		//amount of money anna contributed
	//remove unwantd item
	bill[k] = 0;
	//total bill
	for (int i = 0; i < n; i++)
	{
		sum += bill[i];
	}

	//checking brian's calculation
	if ((sum / 2) == b)
	{
		printf("Bon Appetit\n");
	}
	else
	{
		owe = b - (sum / 2);
		printf("%d\n", owe);
	}

	return 0;
}
