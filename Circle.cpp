#include "Circle.h"

void Circle::Size()
{
	area = (radius * radius * PI);
}

void Circle::Draw()
{
	printf("�~�̖ʐ� : %f\n", area);
}
