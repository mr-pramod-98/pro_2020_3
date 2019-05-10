#include<stdio.h>
#include<math.h>

struct point
{
	float x, y;
};

struct rectangle
{
	struct points poi[3];
	float area;
};

struct rectangle FindArea(struct rectangle rect)
{
	//√ (x2 − x1)2 + (y2 − y1)2
	float distence[3], side1, side2;
	distence[0] = sqrt(pow((rect.poi[1].x) - (rect.poi[0].x), 2) + pow((rect.poi[1].y) - (rect.poi[0].y), 2));
	distence[1] = sqrt(pow((rect.poi[2].x) - (rect.poi[0].x), 2) + pow((rect.poi[2].y) - (rect.poi[0].y), 2));
	distence[2] = sqrt(pow((rect.poi[2].x) - (rect.poi[1].x), 2) + pow((rect.poi[2].y) - (rect.poi[1].y), 2));
	
    	if( distence[0] >= distence[1] && distence[0] >= distence[2] )
        	side1 = distence[1];
		side2 = distence[2];

    	if( distence[1] >= distence[0] && distence[1] >= distence[2] )
        	side1 = distence[0];
		side2 = distence[2];

    	if( distence[2] >= distence[0] && distence[2] >= distence[1] )
        	side1 = distence[1];
		side2 = distence[0];

	rect->area = (side1 * side2);
	return rect;
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
			scanf("%d%d",&(rect[j].poi[i].x),&(rect.poi[i].y));
		}
		rect[j] = FindArea(rect[j]);
	}

	for (j = 0; j < n; j++)
	{
		printf("area = %f", rect[i].area);
	}
}
