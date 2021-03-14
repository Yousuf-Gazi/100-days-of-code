#include <stdio.h>

int main()
{
	int x1, v1, x2, v2;
	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

	if (x2 > x1 && v1 > v2)
	{
		if ((x2 - x1) % (v1 - v2) == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}
