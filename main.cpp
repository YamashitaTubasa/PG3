#include <stdio.h>

template <typename T>

T Min(T a, T b) {
	if (b > a) {
		return static_cast<T>(a);
	}
	else if (a > b) {
		return static_cast<T>(b);
	}

	return 0;
}

template<>
char Min<char>(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");

	return 0;
}

int main() {
	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(1.0, 2.0));
	Min<char>('a', 'b');

	return 0;
}
