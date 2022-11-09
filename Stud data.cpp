/*==================================================
* 
* NAME: ATHARVA WADER
* CLASS: SE
* ROLL NUMBER: 61
* ==================================================*/
#include<iostream>
using namespace std;
class student {
public:
	void getdata();
	void countab();
	void maxmin();
	void totav();


private:
	int size;
	int marks[50];
};
void student:: getdata() {
	cout << "ENTER HOW MANY STUDENTS MARKS YOU WANT TO ENTER" << endl;
	cin >> size;
	cout << "ENTER -1 FOR ABSENT STUDENTS" << endl;

	cout << "ENTER THE DATA: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> marks[i];
	}
}
void student::countab()
{
	int abcount = 0;
	for (int i = 0; i < size; i++) {
		if (marks[i] == -1) {
			abcount++;
		}
	}
	cout << "ABSENT STUDENTS ARE: " << abcount << endl;
}

void student:: maxmin() {
	//max
	int max = marks[0];
	for (int i = 1; i < size; i++) {
		if (marks[i] > max && marks[i] != -1) {
			max = marks[i];
		}
	}
	cout << "MAXIMUM MARKS ARE: " << max << endl;
	//min
	int min = marks[0];
	for (int i = 1; i < size; i++) {
		if (marks[i] < min && marks[i] != -1) {
			min = marks[i];
		}
	}
	cout << "MINIMUM MARKS ARE: " << min << endl;

}
void student::totav() {
	float sum = 0.0;
	float average;
	for (int i = 0; i < size; i++) {
		sum = sum + marks[i];
	}
	average = sum / size;
	cout << "THE TOTAL MARKS ARE: " << sum << endl;
	cout << "THE AVERAGE MARKS ARE: " << average << endl;
}
int main() {
	cout << "STUDENT DATABASE" << endl;
	student s;
	s.getdata();
	s.maxmin();
	s.countab();
	s.totav();
	return 0;
}