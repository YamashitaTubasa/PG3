#include "IShape.h"
#include "Circle.h"
#include "Ractangle.h"

int main(void) {
	IShape* iShape[3];
	
	for (int i = 0; i < 2; i++) {
		if (i < 1)
			iShape[i] = new Circle;
		else
			iShape[i] = new Ractangle;
	}

	for (int i = 0; i < 2; i++) {
		iShape[i]->Size();
	}

	for (int i = 0; i < 2; i++) {
		iShape[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete iShape[i];
	}

	return 0;
}