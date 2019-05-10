#include<stdio.h>

struct points
{
	int x, y;
};

struct rectangle
{
	struct points poi[3];
	float area;
};

struct rectangle Area(struct rectangle rect)
{
	int distence[3];
	
}

void main()
{
	int i, n;
	struct rectangle rect[10];
	printf("enter the value of n = ");
	scanf("%d",&n);
	printf("enter the co-ordinates\n");
	for (j =0 ; j < n; j++)
	{
		for (i = 0; i < 3; i++ )
		{
			scanf("%d%d",&rect[j]->x[i],&rect->y[i]);
		}
		rect[j] = Area(rect[j]);
	}

	printf("area = ", area);
}
