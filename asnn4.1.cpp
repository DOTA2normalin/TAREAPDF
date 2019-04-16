#include <iostream>
using namespace std;
int sumain(const int x, const int y)
{
	return x+y;
}

double sumado(const double x,const double y)
{
	return x+y;
}

int main()
{
	cout<<sumain(5,6);
	cout<<endl;
	cout<<sumado(5.5,6.6);
	return 0;
}
