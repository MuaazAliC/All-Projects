#include <iostream>
using namespace std;
int l, o;
void prime(int x) {
	int  i, m = 0, flag = 0;
	m = x / 2;
	for (i = 2; i <= m; i++)
	{
		if (x % i == 0)
		{
			cout << "False";
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "True ";
}
int main()
{
	int k;
	cout << "			 WELCOME TO PRIME NUMBER TESTER\n";
	cout << "\nNotic \n True = Yes this is a prime number \n False = No this is not a prime numeber ";
	cout << "\nEnter the nubmer : ";
	cin >> k;
	prime(k);
}