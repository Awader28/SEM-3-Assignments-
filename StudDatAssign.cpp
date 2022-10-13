#include "StudDatAssign.h"
#include<iostream>
using namespace std;

void StudDatAssign::getdata(void)
{
	cout << "ENTER THE NUMBER OF STUDENTS WHO's DATA YOU WANT TO ENTER" << endl;
	cin >> size;
	cout << "ENTER MARKS OF STUDENTS IN DSA" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int StudDatAssign::average(void)
{
	int total=0;
	int avg=0;
	for (int i = 0; i < size; i++) {
		total += arr[i];
		avg = total / size;
	}
	cout << "THE TOTAL MARKS OF THIS CLASS ARE: " << total << endl;
	cout << "THE AVERAGE OF THIS CLASS IS: " << avg << endl;
	return 0;
}

int StudDatAssign::maxmin(void)
{
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max<arr[i]) {
			max = arr[i];
		}	
	}
	cout << "THE MAXIMUM MARKS ARE: " << max << endl;
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min != -1&&arr[i] != -1&&min>arr[i]) {
			min = arr[i];
		}
	}
	cout << "THE MINIMUM MARKS ARE: " << min << endl;
	return 0;
}

void StudDatAssign::absentees(void)
{
	int count=0;
	int i = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == -1) {
			count++;
		}
	}

	cout << "ABSENT STUDENTS ARE: " << count << endl;
	cout << "TOTAL ABSENT OUT OF " << size << " ARE " << count;
}
