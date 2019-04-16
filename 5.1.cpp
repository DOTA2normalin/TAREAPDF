#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX_RAND 1;
int main()
{
	double  x=rand()/(double)MAX_RAND;
	double y=rand()/(double)MAX_RAND;
	cout<<x<<","<<y;
	return 0;
}
