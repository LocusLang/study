#include <iostream>

void default_argument(int a, int b = 4, char = 5){}

int main(void)
{
	default_argument(3,4);

	return 0;
}
