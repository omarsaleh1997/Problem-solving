#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int j = 60;
	for (int i = 1; i <= 37; i += 3)
	{

		
		cout << "I=" << i << " J=" << j << endl;
		j-=5;

		}
	return 0;
}