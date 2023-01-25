#pragma once

#define PI 3.14

#include <stdio.h>
#include "IShape.h"

class Circle : public IShape
{
public:
	void Size() override;
	void Draw() override;

private:
	// ‰~
	float radius = 3.0f;
	float area = 0.0f;
};

