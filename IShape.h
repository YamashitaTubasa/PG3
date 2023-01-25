#pragma once

class IShape
{
public:
	IShape();
	virtual ~IShape();

	virtual void Size() = 0;
	virtual void Draw() = 0;
};

