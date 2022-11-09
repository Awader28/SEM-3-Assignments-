#include<iostream>
using namespace std;
class student {
public:
	int Get();
	int Unifun();
	int Interfun();
	int Display();
private:
	string cStudents[40];
	string bStudents[40];
	string name;
	
};

int student::Get()
{
	int size;
	cout << "ENTER THE NO OF STUDENTS WHO'S DATA YOU WANT TO ENTER" << endl;
	cin >> size;
	cout << "ENTER THE NAME OF THE STUDENTS WHO LIKE TO PLAY CRICKET: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> cStudents[i];
	}
	cout << "ENTER THE NAME OF THE STUDENTS WHO LIKE TO PLAY BADMINTON: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> bStudents[i];
	}
}
