#include "Foundation_Math.h"
#include <stdio.h>

int main()
{
	Vec2<int> Test1 = Vec2<int>();
	Test1 += 5;

	printf("%i\n", Test1.X);
	printf("%i\n", Test1.Y);
	printf("%i\n", Test1[0]);
	printf("%i\n", Test1[1]);

	return 0;
}