#include<iostream>
using namespace std;
int main() {
	int x;
	cout << "Enter the size of diamond : ";
	cin >> x;
	for (int i = x; i >= 0; i--) {
		for (int k = i; k >= 0; k--) {
			cout << " ";
		}
		for (int k = i; k < x; k++) {
			cout << "* ";
		}
		
		cout << endl;
	}
	for (int i = 0; i <=x ; i++) {
		cout << "* ";
	}
	cout << endl;
	for (int i = 0; i <= x; i++) {
		for (int k = 0; k <= i; k++) {
			cout << " ";
		}
		for (int k = i; k < x; k++) {
			cout << "* ";
		}
		
		cout << endl;
	}
}