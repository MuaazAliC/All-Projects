#include <iostream>


using namespace std;

int s, p;
const int MAX_MOVES = 8;
int iBug, jBug;

const int IMOVE[MAX_MOVES] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int JMOVE[MAX_MOVES] = { 1, 1, 1, 0, -1, -1, -1, 0 };

bool isValidPosition(int i, int j, int n, int m) {
	return (i >= 0 && i < n && j >= 0 && j < m);
}

char** dynamic_array(int n, int m);
int** comparing_array(int row, int col);
int** giving_values_to_comparing_array(int** ptr, int row, int col);
char** making_room(char** shape, int row, int col);
void displayRoom(char** shape,int**ptr, int row, int col);
//void final_logic(char** shape, int** com, int row, int col, int N, int M);

int main() {
	int row, col;
	cout << "Enter the number of rows : ";
	cin >> row;
	cout << "Enter the number of columns : ";
	cin >> col;
	cout << "Enter starting point on rows : ";
	cin >> iBug;
	cout << "Enter the starting point on column : ";
	cin >> jBug;
	//system("cls");
	if (2 < row && row <= 40 && 2 <= col && col <= 20 && iBug <= row && jBug <= col) {
		char** ptr_array = dynamic_array(row, col);
		int** com_array = comparing_array(row, col);
		giving_values_to_comparing_array(com_array, row, col);
		making_room(ptr_array, row, col);
		displayRoom(ptr_array,com_array, row, col);
	//	final_logic(ptr_array, com_array, row, col, iBug, jBug);
	}

}
char** dynamic_array(int n, int m) {
	char** shape = new char* [n];
	for (int i = 0; i < n; i++) {
		shape[i] = new char[m];
	}
	return shape;
}
int** comparing_array(int row, int col) {
	int** com = new int* [row];
	for (int i = 0; i < row; i++) {
		com[i] = new int[col];
	}
	return com;
}
int** giving_values_to_comparing_array(int** ptr, int row, int col) {
	for (int i = 0; i < row; i++) {
		//shape[i] = new char[col];
		for (int j = 0; j < col; j++) {
			ptr[i][j] = 0;
		}
	}
	
	return 0;
}
char** making_room(char** shape, int row, int col) {
	for (int i = 0; i < row; i++) {
		//shape[i] = new char[col];
		for (int j = 0; j < (col * 2) - 1; j++) {
			shape[i][j] = '|';
		}
	}
	return 0;
}
void displayRoom(char** shape, int** ptr, int row, int col) {
	for (int al = 0; al < 1000000000; al++) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < (col * 2) + 1; j++) {
				cout << "-";
			}
			cout << endl;
			for (int n = 0; n < col; n++) {
				int k = rand() % 8; // Generate a random move

				// Calculate the new position after the move
				int newIBug = iBug + IMOVE[k];
				int newJBug = jBug + JMOVE[k];

				if (k) {
					if (n != col - 1) {
						cout << shape[i][n] << " ";
						//ptr[i][k]++;
					}
					else if (n == col - 1) {
						cout << shape[i][n] << " " << "|";
						//ptr[i][k]++;
					}
				}
				else {
					if (n != col - 1) {
						cout << shape[newIBug][newJBug] << "*";
					}
					else if (n == col - 1) {
						cout << shape[i][n] << "*" << "|";
					}
					ptr[newIBug][newJBug]++;
				}
			}
			cout << endl;
			for (int j = 0; j < (col * 2) + 1; j++) {
				cout << "-";
			}
		}
		cout << endl << endl;
		for (int i = 0; i < row; i++) {
			for (int k = 0; k < col; k++) {
				cout << ptr[i][k] << " ";
			}
			cout << endl;
		}
		system("cls");
	}
}


