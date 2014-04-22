#include <iostream>


void param_fn(const int &num, ...)
{
	std::cout<< num <<std::endl;
}

int main(void)
{
	int num = 3;
	param_fn(num, 4, 5, 6);
	param_fn(6, 4, 5, 6);

	return 0;
}
