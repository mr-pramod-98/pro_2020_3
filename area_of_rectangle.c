#include<stdio.h>
void main()
{
	int i, n, x[10], y[10], dest[2];
	float area;
	printf("enter the value of n = ");
	scanf("%d",&n);
	printf("enter the co-ordinates\n");
	for (j =0 ; j < n; j++)
	{
		for (i = 0; i < 3; i++ )
		{
			scanf("%d%d",&x[i],&y[i]);
		}
		dest = find_distence(x, y);
		area = Area(dest);
	}
	printf("area = ", area);
}
