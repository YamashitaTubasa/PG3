#include "Circle.h"

void Circle::Size()
{
	area = (radius * radius * PI);
}

void Circle::Draw()
{
	printf("â~ÇÃñ êœ : %f\n", area);
}
