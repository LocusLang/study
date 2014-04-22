#include <iostream>

using namespace std;

string::size_type find_char(const string &s, char ch)
{
	string::size_type i = 0;

	while(i != s.size() && s[i] != ch)
	{
		i++;
	}

	return i;
}


int main()
{
	cout<<find_char("hello,world", 'o')<<endl;

	return 0;
}
