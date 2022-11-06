#include <iostream>
using namespace std;
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define rombus
//#define plusminus
#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX "\xDB\xDB"//(char)219
#define BLACK_BOX "\x20\x20"
//#define CHESS
#define HARD_CHESS
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество символов: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
#endif
#ifdef TRIANGLE_1
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= i; j++)
	{
		cout << "*";
	}
	cout << endl;
}
}
#endif 
#ifdef TRIANGLE_2
for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++)
	{
		cout << "*";
	}
	cout << endl;
}
}
#endif 
#ifdef TRIANGLE_3
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < i; j++)cout << " ";
	for (int j = i; j < n; j++)cout << "*";
	cout << endl;
}
}
#endif // TRIANGLE_3
#ifdef TRIANGLE_4
for (int i = 0; i < n; i++)
{

	for (int j = i; j < n; j++)cout << " ";
	for (int j = 0; j <= i; j++)cout << "*";
	cout << endl;
}
}
#endif // TRIANGLE_4
#ifdef rombus
for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++)cout << " ";
	for (int j = 0; j <= 0; j++)cout << "/";
	for (int j = 0; j < i * 2; j++)cout << " ";
	for (int j = 0; j <= 0; j++)cout << char(92);
	for (int j = i; j < n; j++)cout << " ";
	cout << endl;
}
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= i; j++)cout << " ";
	for (int j = 0; j <= 0; j++)cout << char(92);
	for (int j = 0; j < (n - 1) * 2 - i * 2; j++)cout << " ";
	for (int j = 0; j <= 0; j++)cout << "/";
	for (int j = 0; j <= i; j++)cout << " ";

	cout << endl;
}
}
#endif
#ifdef plusminus
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		//if((i+j) % 2 == 0)cout << "+"; else cout << "-";	
		 //
		//cout << ((i + j) % 2 == 0 ? "+" : "-");
		cout << (i % 2 == j % 2 ? "+" : "-");
	}
	cout << endl;
}
}
#endif 
#ifdef CHESS
setlocale(LC_ALL, "C");
n++;
for (int i = 0; i <= n; i++)
{
	for (int j = 0; j <= n; j++)
	{
		if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
		else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
		else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
		else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
		else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
		else if (j == 0 || j == n)cout << VERTICAL_LINE;
		else
		{

			cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
		}
	}
	cout << endl;
}
}
#endif
#ifdef HARD_CHESS

for (int pos = 0; pos <= n; pos++)
{
	if (pos % 2 == 0)
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)cout << "*";
		for (int j = i; j < i; j++)cout << " ";
		cout << endl;
	}
	else if (pos!=n)
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)cout <<  "*" ;
	}
	
	else
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)cout << " ";
		cout << endl;
	}
	
}
}
#endif



