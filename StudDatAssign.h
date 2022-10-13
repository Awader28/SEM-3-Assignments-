#pragma once
#ifndef STUDDATAASSIGN_H
#define STUDDATASSIGN_H
class StudDatAssign
{
public:
	StudDatAssign(){}//constructor
	void getdata(void);
	int average(void);
	int maxmin(void);
	void absentees(void);
protected:
	int size;
	float arr[100];
};

#endif

