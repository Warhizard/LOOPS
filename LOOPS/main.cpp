#include <iostream>

using std::endl;
using std::cin;
using std::cout;


//#define while1
//#define POLINDROME
//#define for1
//#define for2
//#define ascii
//#define finonachi
#define finonachi2
//#define EASYNUMBERS
void main()
{
	setlocale(LC_ALL, "");

#ifdef while1
	int n;
	cout << "������� ���������� ��������" << endl; cin >> n;
	while (n)
	{
		cout << n << "\t";
		n--;
	}
	cout << endl; 

#endif // while1
#ifdef POLINDROME
	int number, reverse = 0;
	cout << "������� �����: " << endl; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}

	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "����� ���������!!!";
	}
	else 
	{
		cout << "��� ������� �����";
	}
#endif
#ifdef for1
	long long int n, f=1;
	cout << "������� �����: " << endl; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!= ";
		f *= i;
		cout << f << endl;
	}
	cout << n << "! = " << f << endl;
#endif
#ifdef for2
	double a, N = 1;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if(n<0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif
#ifdef ascii
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "";
	}
	cout << endl;
#endif
#ifdef finonachi
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0,b=1,c=a+b; a < n; a=b,b=c,c=a+b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif
#ifdef finonachi2
	int n;
	cout << "�������  �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n;  a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif 
#ifdef EASYNUMBERS
	int n;
	cout << "������� ���������� �����:"; cin >> n;
	for (int i = 2; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if(i%j==0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
#endif
}