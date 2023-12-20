#include <iostream>
using namespace std;
int main()
{
	int i, x;
	cout << "Please enter the size of the diamond \n notice \n : The size is greater than 3 \n : The size is a odd number \n Please enter the size : ";
	cin >> x;
	system("cls");
	if (x > 3 || x % 2 != 0){
	for (int k = 1; k < (x * 2); k++)
		{
			cout << "*";
		}
	cout << endl;
	
		for (int i = x - 1; i > 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			for (int k = 1; k < x - i; k++)
			{
				cout << " ";
			}
			for (int o = 1; o <= x - i; o++)
			{
				cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		for (int i = 1; i <= (x * 2) - 1; i++)
		{
			if (i == 1 || i == (x * 2) - 1)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;

		for (int i = 1; i < x; i++) {
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			for (int k = 1; k < x - i; k++) {
				cout << " ";
			}
			for (int k = 1; k <= x - i; k++) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		  
		}
		for (int k = 1; k < (x * 2) ; k++)
		{
			cout << "*";
		}


	}
	else {
		cout << "Invalid Choice ";
	}
	return 0;
}
