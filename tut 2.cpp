#include <iostream>


using namespace std;

int s, p;
bool ko = false;
const int MAX_MOVES = 8;
int iBug, jBug;

const int IMOVE[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int JMOVE[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };

for (int n = 0; n < col; n++) {
	int currentPositionI = iBug; // Current position's I coordinate
	int currentPositionJ = jBug; // Current position's J coordinate

	for (int i = 0; i < 8; i++) {
		int newI = currentPositionI + IMOVE[i];
		int newJ = currentPositionJ + JMOVE[i];

		// Check if the new position is within the desired boundaries
		if (newI >= 0 && newI < 8 && newJ >= 0 && newJ < 8) {
			// Perform desired operation with the new position
			std::cout << "Move to: (" << newI << ", " << newJ << ")" << std::endl;
		}
	}

char** dynamic_array(int n, int m);
int** comparing_array(int row, int col);
int** giving_values_to_comparing_array(int** ptr, int row, int col);
char** making_room(char** shape, int row, int col);
void displayRoom(char** shape, int** ptr, int row, int col);
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
		displayRoom(ptr_array, com_array, row, col);
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
	srand(time(0)); // Seed the random number generator

	for (int al = 0; al < 1000000000; al++) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < (col * 2) + 1; j++) {
				cout << "-";
			}
			cout << endl;
			for (int n = 0; n < col; n++) {
				int currentPositionI = iBug; // Current position's I coordinate
				int currentPositionJ = jBug; // Current position's J coordinate

				for (int i = 0; i < 8; i++) {
					int newI = currentPositionI + IMOVE[i];
					int newJ = currentPositionJ + JMOVE[i];

					// Check if the new position is within the desired boundaries
					if (newI >= 0 && newI < 8 && newJ >= 0 && newJ < 8) {
						// Perform desired operation with the new position
						std::cout << "Move to: (" << newI << ", " << newJ << ")" << std::endl;
					}
				}
				if (newI >= 0 && newI < 8 && newJ >= 0 && newJ < 8) {
					if (n != col - 1) {
						cout << shape[i][n] << " ";
						ptr[i][n]++;
					} else if (n == col - 1) {
						cout << shape[i][n] << " " << "|";
						ptr[i][n]++;
					}
				} else {
					if (n != col - 1) {
						cout << shape[newI][newJ] << "*";
					} else if (n == col - 1) {
						cout << shape[i][n] << "*" << "|";
					}
					ptr[newI][newJ]++;
					if (ptr[i][n] < ptr[newI][newJ] || ptr[i][n] < ptr[newI][newJ]) {
						ko = true;
					}
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
		if (ko) {
			break;
			;
		}
		system("cls");
	}
}*/
/*#include <iostream>
#include <ctime>

using namespace std;

int s, p;
bool ko = false;
const int MAX_MOVES = 8;
int iBug, jBug;

const int IMOVE[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int JMOVE[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };

char** dynamic_array(int n, int m);
int** comparing_array(int row, int col);
int** giving_values_to_comparing_array(int** ptr, int row, int col);
char** making_room(char** shape, int row, int col);
void displayRoom(char** shape, int** ptr, int row, int col);

int main() {
	int row, col;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of columns: ";
	cin >> col;
	cout << "Enter the starting point on row: ";
	cin >> iBug;
	cout << "Enter the starting point on column: ";
	cin >> jBug;
	//system("cls");
	if (2 < row && row <= 40 && 2 <= col && col <= 20 && iBug <= row && jBug <= col) {
		char** ptr_array = dynamic_array(row, col);
		int** com_array = comparing_array(row, col);
		giving_values_to_comparing_array(com_array, row, col);
		making_room(ptr_array, row, col);
		displayRoom(ptr_array, com_array, row, col);
		//final_logic(ptr_array, com_array, row, col, iBug, jBug);
	}
	return 0;
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
		for (int j = 0; j < col; j++) {
			ptr[i][j] = 0;
		}
	}
	return ptr;
}

char** making_room(char** shape, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < (col * 2) - 1; j++) {
			shape[i][j] = '|';
		}
	}
	return shape;
}

void displayRoom(char** shape, int** ptr, int row, int col) {
	srand(time(0)); // Seed the random number generator

	for (int al = 0; al < 1000000000; al++) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < (col * 2) + 1; j++) {
				cout << "-";
			}
			cout << endl;
			for (int n = 0; n < col; n++) {
				int currentPositionI = iBug; // Current position's I coordinate
				int currentPositionJ = jBug; // Current position's J coordinate

				for (int k = 0; k < 8; k++) {
					int newI = currentPositionI + IMOVE[k];
					int newJ = currentPositionJ + JMOVE[k];

					// Check if the new position is within the desired boundaries
					/*if (newI >= 0 && newI < 8 && newJ >= 0 && newJ < 8) {
						// Perform desired operation with the new position
						cout << "Move to: (" << newI << ", " << newJ << ")" << endl;

					}
					if (k) {
						if (n != col - 1) {
							cout << shape[newI][newJ] << "*";
							ptr[newI][newJ]++;
						}
						else if (n == col - 1) {
							cout << shape[i][n] << "*" << "|";
							ptr[i][n]++;
						}
					}
					else {
						if (n != col - 1) {
							cout << shape[newI][newJ] << " ";
						}
						else if (n == col - 1) {
							cout << shape[newI][newJ] << " " << "|";
						}
						ptr[newI][newJ]++;
						if (ptr[i][n] < ptr[newI][newJ] && ptr[i][n] < ptr[newI][newJ]) {
							ko = true;
						}
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
				}

				
		if (ko) {
			break;
		}
		system("cls");
	}
}
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int s, p;
bool ko = false;
const int MAX_MOVES = 8;
int iBug, jBug;

const int IMOVE[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int JMOVE[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };

char** dynamic_array(int n, int m);
int** comparing_array(int row, int col);
int** giving_values_to_comparing_array(int** ptr, int row, int col);
char** making_room(char** shape, int row, int col);
int displayRoom(char** shape, int** ptr, int row, int col);

int main() {
	int row, col;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of columns: ";
	cin >> col;
	cout << "Enter starting point on rows: ";
	cin >> iBug;
	cout << "Enter the starting point on column: ";
	cin >> jBug;
	system("cls");

	if (2 < row && row <= 40 && 2 <= col && col <= 20 && iBug <= row && jBug <= col) {
		char** ptr_array = dynamic_array(row, col);
		int** com_array = comparing_array(row, col);
		giving_values_to_comparing_array(com_array, row, col);
		making_room(ptr_array, row, col);
		displayRoom(ptr_array, com_array, row, col);
	}

	return 0;
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
		for (int j = 0; j < col; j++) {
			ptr[i][j] = 0;
		}
	}
	return ptr;
}

char** making_room(char** shape, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < (col * 2) - 1; j++) {
			shape[i][j] = '|';
		}
	}
	return shape;
}

int displayRoom(char** shape, int** ptr, int row, int col) {
	int moves = 0;
	srand(time(0));  // Seed the random number generator

	for (int al = 0; al < 1000000000; al++) {
		cout << endl << endl;
		cout << "                  Rectangular Room  \n                Bug is represented by \"*\"" << endl << endl;

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < (col * 2) + 1; j++) {
				cout << "-";
			}
			cout << endl;

			for (int n = 0; n < col; n++) {
				int k = rand() % 8;

				int newIBug = iBug + IMOVE[k];
				int newJBug = jBug + JMOVE[k];

				if (k) {
					if (n != col - 1) {
						cout << shape[i][n] << " ";
						ptr[i][n]++;
						moves++;
					}
					else if (n == col - 1) {
						cout << shape[i][n] << " " << "|";
						ptr[i][n]++;
						moves++;
					}
				}
				else {
					if (n != col - 1) {
						cout << shape[newIBug][newJBug] << "*";
						moves++;
						continue;
					}
					else if (n == col - 1) {
						cout << shape[i][n] << "*" << "|";
						moves++;
						break;
					}

					ptr[newIBug][newJBug]++;
				}
			}
			cout << endl;

			for (int j = 0; j < (col * 2) + 1; j++) {
				cout << "-";
			}
		}

		for (int i = 1; i < (col * 2) + 1; i++) {
			cout << "-";
		}

		cout << endl << endl;
		cout << "The total legal moves are " << moves;
		cout << endl << endl << endl;
		cout << "             Walk Density " << endl << endl;

		for (int i = 0; i < row; i++) {
			for (int k = 0; k < col; k++) {
				cout << ptr[i][k] << " ";
			}
			cout << endl;
		}

		ko = false;

		for (int i = 0; i < row; i++) {
			for (int k = 0; k < col; k++) {
				if (ptr[i][k] >= ptr[k][i]) {
					if (ptr[i][k] >= 1) {
						ko = true;
					}
				}
				else {
					if (ptr[i][k] >= 1) {
						ko = true;
					}
				}
			}
		}

		if (ko) {
			break;
		}
		else {
			system("cls");
		}
	}

	return 0;
}
*/

/*#include <iostream>
#include <cstdlib>

using namespace std;

int iBug = 0, jBug = 0;

const int IMOVE[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int JMOVE[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };

char** dynamic_array(int n, int m);
int** comparing_array(int row, int col);
void giving_values_to_comparing_array(int** ptr, int row, int col);
void making_room(char** shape, int row, int col);
void displayRoom(char** shape, int** ptr, int row, int col);

int main() {
	int row, col;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of columns: ";
	cin >> col;
	cout << "Enter starting point on rows: ";
	cin >> iBug;
	cout << "Enter the starting point on column: ";
	cin >> jBug;

	if (2 < row && row <= 40 && 2 <= col && col <= 20 && iBug <= row && jBug <= col) {
		char** ptr_array = dynamic_array(row, col);
		int** com_array = comparing_array(row, col);
		giving_values_to_comparing_array(com_array, row, col);
		making_room(ptr_array, row, col);
		displayRoom(ptr_array, com_array, row, col);
	}
	else {
		cout << "Please check the input limits: 2 < row && row <= 40 && 2 <= col && col <= 20 && iBug <= row && jBug <= col";
	}

	return 0;
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

void giving_values_to_comparing_array(int** ptr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			ptr[i][j] = 0;
		}
	}
}

void making_room(char** shape, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < (col * 2) - 1; j++) {
			shape[i][j] = '|';
		}
	}
}

void displayRoom(char** shape, int** ptr, int row, int col) {
	int moves = 0;

	for (int al = 0; al < 500000000; al++) {
		cout << endl << endl;
		cout << "                  Rectangular Room\n                Bug is represented by \"*\"" << endl << endl;

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < (col * 2) + 2; j++) {
				cout << "-";
			}
			cout << endl;

			for (int n = 0; n < col; n++) {
				int k = rand() % 8;
				int newIBug = iBug + JMOVE[k];
				int newJBug = jBug + IMOVE[k];

				if (k) {
					if (n != col - 1) {
						cout << "| ";
						ptr[i][n]++;
						moves++;
					}
					else if (n == col - 1) {
						cout << " " << "|";
						ptr[i][n]++;
						moves++;
					}
				}
				else {
					if (n == col - 1) {
						cout << "*" << shape[i][n];
						moves++;
						break;
					}
					else {
						cout << shape[i][n] << "*";
						moves++;
						continue;
					}

					ptr[n][i]++;
				}
			}
			cout << endl;
			for (int j = 0; j < (col * 2) - 1; j++) {
				cout << "-";
				break;
			}
		}

		for (int i = 1; i < (col * 2) + 2; i++) {
			cout << "-";
		}

		cout << endl << endl;
		cout << "The total legal moves are " << moves << endl << endl;
		cout << "             Walk Density " << endl << endl;

		for (int i = 0; i < row; i++) {
			for (int k = 0; k < col; k++) {
				cout << ptr[i][k] << " ";
			}
			cout << endl;
		}

		bool ko = false;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (i != row - 1 && j != col - 1) {
					if (ptr[i][j] > i + 1) {
						if (ptr[i][j] < ptr[i + 1][j + 1] && ptr[i][j] < ptr[i - 1][j - 1]) {
							if (ptr[i][j] >= 1) {
								ko = true;
							}
						}
					}
				}
			}
		}

		if (ko) {
			break;
		}
		else {
			system("cls");
		}
	}
}
*/