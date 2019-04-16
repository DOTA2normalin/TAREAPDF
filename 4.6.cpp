#include <iostream>

using namespace std;

int suma(const int numbers[],const int len)
{
	return len == 0 ? 0 : numbers[0] + suma(numbers + 1, len - 1); 
}
int main()
{
	const int len=4;
	const int numbers[4]={1,5,2,3};
	cout<<suma(numbers,len);	
	return 0;
}
