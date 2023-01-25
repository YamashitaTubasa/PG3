#pragma once

#include <stdio.h>
#include "IShape.h"


class Ractangle : public IShape
{
public:
	void Size() override;
	void Draw() override;

private:
	// ‹éŒ`
	float vertical = 4.0f;
	float horizontal = 4.0f;
	float area = 0.0f;
};

