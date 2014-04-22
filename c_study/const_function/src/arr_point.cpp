#include <iostream>

void print(const char *begin, const char *end)
{
	while(*begin != *end){
		std::cout<<*begin<<std::endl;
		begin++;
	}
	std::cout<<sizeof(end)<<std::endl;
}

int main(void)
{
	char arr[] = {1,2,3};
	
	print(arr, arr + sizeof(arr));
	std::cout<<sizeof(arr)<<std::endl;

	return 0;
}
