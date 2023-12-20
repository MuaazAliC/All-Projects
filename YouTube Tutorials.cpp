////#include <iostream>
////#include<iomanip>
////using namespace std;
////
////int shape(int x);
////
////int main() {
////    int x = 0, row;
////    int o = 1;
////
////    cout << "Enter the number of rows: ";
////    cin >> row;
////    system("cls");
////
////    x = row - 1;
////    shape(x);
////    return 0;
////}
////
////int shape(int row) {
////    int prev = 0, curr = 1;
////
////    for (int i = row; i >= 0; i--) {
////        for (int k = i; k > 0; k--) {
////            cout << "        ";
////        }
////
////        for (int k = i; k <= row; k++) {
////            if (k == i) {
////                cout << "*       ";
////            }
////
////            else {
////                if (curr >= 100000) {
////                    cout << curr << "  ";
////                }
////                else  if (curr >= 10000) {
////                    cout << curr << "   ";
////                }
////                else if (curr >= 1000) {
////                    cout << curr << "    ";
////                }
////                else if (curr >= 100) {
////                    cout << curr << "     ";
////                }
////                else if (curr >= 10) {
////                    cout << curr << "      ";
////                }
////                else {
////                    cout << curr << "       ";
////                }
////
////                int next = prev + curr;
////                prev = curr;
////                curr = next;
////            }
////        }
////
////        for (int k = i; k < row; k++) {
////            if (k == row - 1) {
////                cout << "*";
////            }
////            /*  else {
////                  if (curr >= 10000) {
////                      cout << curr << "  ";
////                  }
////                  else if (curr >= 1000) {
////                      cout << curr << "   ";
////                  }
////                  else if (curr >= 1000) {
////                      cout << curr << "    ";
////                  }
////                  else if (curr >= 100) {
////                      cout << curr << "     ";
////                  }
////                  else if (curr >= 10) {
////                      cout << curr << "      ";
////                  }
////                  else {
////                      cout << curr << "       ";
////                  }
////
////                  int next = prev + curr;
////                  prev = curr;
////                  curr = next;
////              }*/
////            else {
////                if (curr >= 100000) {
////                    cout << curr << "  ";
////                }
////                else  if (curr >= 10000) {
////                    cout << curr << "   ";
////                }
////                else if (curr >= 1000) {
////                    cout << curr << "    ";
////                }
////                else if (curr >= 100) {
////                    cout << curr << "     ";
////                }
////                else if (curr >= 10) {
////                    cout << curr << "      ";
////                }
////                else {
////                    cout << curr << "       ";
////                }
////
////                int next = prev + curr;
////                prev = curr;
////                curr = next;
////            }
////        }
////
////        cout << endl;
////    }
////
////    return 0;
////}
////#include<iostream>
////#include<iomanip>
////using namespace std;
////int shape(int row);
////int main() {
////	int row, real_row;
////	cout << "Enter the number of rows : ";
////	cin >> row;
////	real_row = row - 1;
////    shape(real_row);
////}
////int shape(int row) {
////    int prev = 0, curr = 1;
////
////    for (int i = row; i >= 0; i--) {
////        for (int k = i; k > 0; k--) {
////            cout << "        ";
////        }
////
////        for (int k = i; k <= row; k++) {
////            if (k == i) {
////                cout << "*"<<setw(i);
////            }
////
////            else {
////
////                cout << curr <<setw(i);
////                int next = prev + curr;
////                prev = curr;
////                curr = next;
////               // if (curr >= next * 10) {
////                //    cout << curr << setw(i);
////                //}
////            }
////
////          
////        }
////
////
////        for (int k = i; k < row; k++) {
////            if (k == row - 1) {
////                cout << "*";
////            }
////            else {
////                cout << curr <<setw(i);
////                int next = prev + curr;
////                prev = curr;
////                curr = next;
////              //  if (curr >= next * 10 ) {
////              //      cout << curr <<setw(i) ;
////               // }
////            }
////
////        }
////
////
////        cout << endl;
////
////       
////    }
////    return 0;
////}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void shape(int row);
//
//int main() {
//    int row;
//    cout << "Enter the number of rows: ";
//    cin >> row;
//    int real_row = row - 1;
//    shape(real_row);
//    return 0;
//}
//
//void shape(int row) {
//    int l = 10;
//    int j = 12;
//    int prev = 0, curr = 1;
//
//    for (int Parent_loop = row; Parent_loop >= 0; Parent_loop--) {
//
//        for (int child_loop_for_spaces = Parent_loop;   child_loop_for_spaces >= 0;  child_loop_for_spaces--) {
//            cout << "            ";
//        }
//
//        for (int child_loop_for_output_and_maintain_shape = Parent_loop; child_loop_for_output_and_maintain_shape <= row; child_loop_for_output_and_maintain_shape++) {
//            if (child_loop_for_output_and_maintain_shape == Parent_loop) {
//                cout << "*           ";
//            }
//            else {
//                cout << left << setw(j) << curr << left << setw(j);
//                int next = prev + curr;
//                prev = curr;
//                curr = next;
//            }
//        }
//
//        for (int child_loop_for_output_and_maintain_shape = Parent_loop; child_loop_for_output_and_maintain_shape < row; child_loop_for_output_and_maintain_shape++) {
//            if (child_loop_for_output_and_maintain_shape == row - 1) {
//                cout << "*";
//            }
//            else {
//                cout << left << setw(j) << curr << left << setw(j);
//                int next = prev + curr;
//                prev = curr;
//                curr = next;
//            }
//        }
//        cout << endl;
//        if (curr >= 10 * l) {
//            j--;
//            l = l + 10;
//        }
//    }
//}
//
//
////#include<iostream>
////using namespace std;
////int l = 10;
////int main() {
////	for (int i = 1; i <= 1000; i++) {
////		int k = i * 1;
//////	
////		if (k == 10 * l) {
////			cout << "*" << endl;
////			l = l * 10;
////		}
////		else {
////			cout << k << endl;
////		}
////	}
////}




#include <iostream>
#include <string>
#include <regex>
#include <stdlib.h>

using namespace std;


const int MAX_STUDENTS = 1000;
string choice_fun(string a);
string age_fun(string a);
string  name_fun(string a, int q, int t);
string  email_fun(string a);
string  grade_fun(string a);
string  classes_fun(string a);
string phone_number_fun(string a);
bool isValidEmail(const string& email);
bool is_Valid_choice(const string& fake_choice);
bool is_Valid_age(const string& fake_choice);
bool is_valid_phone_number(const string& phoneNumbers);
void menu(int x, int& numStudents, string* names, string* emails, int* ages, string* classes, string* grades, string* phoneNumbers);


int main() {

    int true_choice;
    string fake_choice;
    string names[MAX_STUDENTS];
    string emails[MAX_STUDENTS];
    int ages[MAX_STUDENTS];
    string classes[MAX_STUDENTS];
    string grades[MAX_STUDENTS];
    string phoneNumbers[MAX_STUDENTS];
    int numStudents = 0;

    cout << "Welcome to Student Data Management Console App!" << endl;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Update Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;
        fake_choice = choice_fun(fake_choice);
        true_choice = stoi(fake_choice);
        system("cls");
        menu(true_choice, numStudents, names, emails, ages, classes, grades, phoneNumbers);

        if (true_choice == 5) {
            cout << "Exiting the application. Goodbye!" << endl;
            break;
        }
    }

    return 0;
}


void menu(int x, int& numStudents, string* names, string* emails, int* ages, string* classes, string* grades, string* phoneNumbers) {

    if (x == 1) {
        if (numStudents >= MAX_STUDENTS) {
            cout << "Maximum number of students reached!" << endl;
            return;
        }
        string fake_nam;
        names[numStudents] = name_fun(fake_nam, 15, 15);

        string fake_emai;
        emails[numStudents] = email_fun(fake_emai);
        string fake_age;
        fake_age = age_fun(fake_age);
        ages[numStudents] = stoi(fake_age);
        string fake_grad;
        grades[numStudents] = grade_fun(fake_grad);

        string fake_clas_s;
        classes[numStudents] = classes_fun(fake_clas_s);

        string fake_phoNe;
        phoneNumbers[numStudents] = phone_number_fun(fake_phoNe);

        numStudents++;
        cout << "\nStudent added successfully!" << endl;
    }
    else if (x == 2) {
        if (numStudents == 0) {
            cout << "Please fist add a student now there is no student save in program ";
            cout << endl << endl << endl;
        }
        else {
            for (int i = 0; i < numStudents; i++) {
                cout << "Student Information:" << endl;
                cout << "Name: " << names[i] << endl;
                cout << "Email: " << emails[i] << endl;
                cout << "Age: " << ages[i] << endl;
                cout << "Grade: " << grades[i] << endl;
                cout << "Class: " << classes[i] << endl;
                cout << "Phone: " << phoneNumbers[i] << endl;
                cout << endl;
            }
        }
    }
    else if (x == 3) {
        if (numStudents == 0) {
            cout << "Please fist add a student now there is no student save in program ";
            cout << endl << endl << endl;
        }
        else {
            string emailToUpdate;
            cout << "Enter email: ";
            //  cin.ignore();
            getline(cin, emailToUpdate);
            while (!isValidEmail(emailToUpdate)) {
                cout << "Invalid email address. Please enter a valid email: ";
                getline(cin, emailToUpdate);
            }


            for (int i = 0; i < numStudents; i++) {
                if (emails[i] == emailToUpdate) {
                    cout << "\nMenu:" << endl;
                    cout << "1. Name" << endl;
                    cout << "2. Email" << endl;
                    cout << "3. Age" << endl;
                    cout << "4. Grade" << endl;
                    cout << "5. Class" << endl;
                    cout << "6. Phone" << endl;
                    cout << "7. Cancel" << endl;
                    string fake_choice;
                    cout << "Enter your choice: ";
                    getline(cin, fake_choice);
                    while (!is_Valid_choice(fake_choice)) {
                        cout << "Invalid choice. Please enter a valid choice: ";
                        getline(cin, fake_choice);
                    }
                    int choice;
                    choice = stoi(fake_choice);

                    if (choice == 1) {
                        string fake_nam;
                        names[i] = name_fun(fake_nam, 15, 15);
                        cout << "\nStudent information updated successfully!" << endl;
                    }
                    else if (choice == 2) {
                        string fake_emai;
                        emails[i] = email_fun(fake_emai);
                        cout << "\nStudent information updated successfully!" << endl;
                    }
                    else if (choice == 3) {
                        string fake_age;
                        fake_age = age_fun(fake_age);
                        ages[i] = stoi(fake_age);

                        cout << "\nStudent information updated successfully!" << endl;
                    }
                    else if (choice == 4) {

                        string fake_grad;
                        grades[i] = grade_fun(fake_grad);


                        cout << "\nStudent information updated successfully!" << endl;
                    }
                    else if (choice == 5) {
                        string fake_clas_s;
                        classes[i] = classes_fun(fake_clas_s);


                        cout << "\nStudent information updated successfully!" << endl;
                    }
                    else if (choice == 6) {
                        string fake_phoNe;
                        phoneNumbers[i] = phone_number_fun(fake_phoNe);

                        cout << "\nStudent information updated successfully!" << endl;
                    }
                    else if (choice == 7) {
                        cout << "\nUpdate canceled." << endl;
                    }
                    else {
                        cout << "\nInvalid choice." << endl;
                    }
                    return;
                }
            }

            cout << "\nStudent not found." << endl;
        }

    }

    else if (x == 4) {
        if (numStudents == 0) {
            cout << "Please fist add a student now there is no student save in program ";
            cout << endl << endl << endl;
        }
        else {

            string emailToDelete;
            cout << "Enter email: ";
            //cin.ignore();
            getline(cin, emailToDelete);

            while (!isValidEmail(emailToDelete)) {
                cout << "Invalid email address. Please enter a valid email: ";
                getline(cin, emailToDelete);
            }

            for (int i = 0; i < numStudents; i++) {
                if (emails[i] == emailToDelete) {
                    for (int j = i; j < numStudents; j++) {
                        names[j] = names[j + 1];
                        emails[j] = emails[j + 1];
                        ages[j] = ages[j + 1];
                        grades[j] = grades[j + 1];
                        classes[j] = classes[j + 1];
                        phoneNumbers[j] = phoneNumbers[j + 1];
                    }
                    numStudents--;
                    cout << "\nStudent deleted successfully!" << endl;
                    return;
                }
            }
            cout << "\nStudent not found." << endl;
        }
    }

    else if (x == 5) {
        cout << "Exiting the application. Goodbye!" << endl;
    }
    else {
        cout << "Invalid Choice" << endl;
    }
}
string choice_fun(string a) {
    cout << "Enter your choice: ";
    getline(cin, a);
    while (!is_Valid_choice(a)) {
        cout << "Invalid choice. Please enter your choice between 1-5: ";
        getline(cin, a);
    }
    return a;
}
string age_fun(string a) {
    cout << "Enter your age: ";
    getline(cin, a);
    while (!is_Valid_choice(a)) {
        cout << "Invalid age : Your age must be a digit : ";
        getline(cin, a);
    }
    return a;
}
string name_fun(string a, int q, int t) {
    cout << "Enter student name: ";

    getline(cin, a);
    while (true)
    {
        if (a.length() > q) {
            cout << "Invalid Name \n Your name Must be less than 15 digits \n Enter your name again : ";

            getline(cin, a);

        }
        if (a.length() < t) {
            break;
        }
        else {
            continue;
        }
    }
    return a;
}
string email_fun(string a) {
    cout << "Enter email: ";
    // cin.ignore();
    getline(cin, a);
    while (!isValidEmail(a)) {
        cout << "\nInvalid email address. Please enter valid email like 12sjc@gmail.com,sa12@gm.co: ";
        //  cin.ignore();
        getline(cin, a);
    }
    return a;
}
string grade_fun(string a) {
    cout << "Enter the grade : ";
    getline(cin, a);

    while (true)
    {
        if (a.length() > 2) {
            cout << "Invalid grade \n Your grade must be like this AA,aa,BB,bb,Aa,Bb etc  \n Enter your name again : ";

            getline(cin, a);

        }
        if (a.length() < 3) {
            break;
        }
        else {
            continue;
        }
    }
    return a;
}
string classes_fun(string a) {
    cout << "Enter the class : ";
    getline(cin, a);
    while (true)
    {
        if (a.length() > 20) {
            cout << "Invalid Name \n Your class name Must be less than 20 characters like IcS,Phd etc\n Enter your class name again : ";

            getline(cin, a);

        }
        if (a.length() < 20) {
            break;
        }
        else {
            continue;
        }
    }
    return a;
}
string phone_number_fun(string a) {
    cout << "Enter your phone number : ";
    //  cin.ignore();
    getline(cin, a);

    while (!is_valid_phone_number(a)) {

        cout << "\nInvalid phone number . your phone number must be 11 digits long and a valid phone number  : ";
        //  cin.ignore();
        getline(cin, a);
    }
    return a;
}
bool isValidEmail(const string& email) {
    static const regex emailRegex(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    return regex_match(email, emailRegex);
}
bool is_Valid_choice(const string& fake_choice) {
    regex r("[[:digit:]]+");
    return regex_match(fake_choice, r);
}
bool is_Valid_age(const string& fake_choice) {
    regex r("^[0-9]{11}$");
    return regex_match(fake_choice, r);
}
bool is_valid_phone_number(const string& phoneNumbers) {
    regex r("[[:digit:]]{3}[[:digit:]]{4}[[:digit:]]{4}");
    return regex_match(phoneNumbers, r);
}