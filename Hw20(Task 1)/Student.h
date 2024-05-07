#pragma once
#include <iostream>
#include<cstring>
using namespace std;

class Student
{
	char fullName[70];
	float averageMark;
	char phone[20];
	char address[40];
	char schoolName[50];
	char groupNumber[10];

public:
	Student();
	Student(const char* fullName, float averageMark, const char* phone, const char* address, const char* schoolName, const char* groupNumber);
	~Student();

	void setFullName(const char* newName);
	void setAverageMark(float _averageMark);
	void setPhone(const char* newPhone);
	void setAddress(const char* newAddress);
	void setSchoolName(const char* newSchoolName);
	void setGroupNumber(const char* newGroupNumber);

	const char* getFullName();
	float getAverageMark();
	const char* getPhone();
	const char* getAddress();
	const char* getSchoolName();
	const char* getGroupNumber();

	void showInfo();
};

