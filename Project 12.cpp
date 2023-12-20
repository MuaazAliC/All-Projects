#include <iostream>
using namespace std;
int main()
{
	int op[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int k;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the value " << i + 1 << ":";
		cin >> op[i];
	}
	system("cls");
	for (int i = 0; i < 10; i++)
	{
		k = op[i] * op[i];
		cout << "\n The square of " << op[i] << " = " << k;
	}
	return 0;
}