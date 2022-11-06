#include <iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			cout << i << "\t" << j << endl;
		}
	}
#endif
#ifdef
}