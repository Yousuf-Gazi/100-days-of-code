#include <stdio.h>

int main()
{
	int s, t, a, b, m, n, apple, orange, temp;
	scanf("%d %d", &s, &t);
	scanf("%d %d", &a, &b);
	scanf("%d %d", &m, &n);
	//apple distance
	int apcount = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &apple);
		apple += a; 
		if (apple >= s && apple <= t)
		{
			apcount++;
		}
		apple = 0;
	}
	//orange distance
	int orcount = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &orange);
		orange += b;
		if (orange >= s && orange <= t)
		{
			orcount++;
		}
		orange = 0;
	}
	printf("%d\n%d\n", apcount, orcount);
	
	return 0;
}
