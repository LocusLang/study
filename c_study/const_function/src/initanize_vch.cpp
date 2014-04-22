#include <vector>
#include <iostream>


using namespace std;

typedef vector<int> v_int;

int main()
{
	v_int defv_int;
	defv_int.resize(3);
	defv_int[0] = 1;
	defv_int[1] = 2;
	defv_int[2] = 3;

	v_int copy_vint(defv_int);
	v_int size_vint(10, 1);
	v_int iterator_vint(defv_int.begin(), defv_int.end());
	v_int alloctor_vint(5);
	
	return 0;
}
