#include "Student.h"

Student::Student()
{
    strcpy_s(fullName, 70, "Pupkin Vasya");
    averageMark = 1.0;
    strcpy_s(phone, 20, "+38(099)00-00-000");
    strcpy_s(address, 40, "Kharkiv");
    strcpy_s(schoolName, 50, "IT Step");
    strcpy_s(groupNumber, 10, "PV-311");
}

Student::Student(const char* _fullName, float _averageMark, const char* _phone, const char* _address, const char* _schoolName, const char* _groupNumber)
{
    strcpy_s(fullName, 70, _fullName);
    averageMark = _averageMark;
    strcpy_s(phone, 20, _phone);
    strcpy_s(address, 40, _address);
    strcpy_s(schoolName , 50, _schoolName);
    strcpy_s(groupNumber , 10, _groupNumber);
}

Student::~Student()
{

}

void Student::setFullName(const char* newName)
{
    if (strlen(newName) > 2) {
        strcpy_s(fullName, 70, newName);
    }
    else {
        cout << "Error: strlen(newName) < 2!!!\n";
    }
}

void Student::setAverageMark(float _averageMark)
{   
    if(_averageMark > 0) averageMark = _averageMark;
    else {
        cout << "Error: _averageMark < 0!!!\n\n";
    }
}

void Student::setPhone(const char* newPhone)
{
    if (strlen(newPhone) >= 5) {
        strcpy_s(phone, 20, newPhone);
    }
    else {
        cout << "Error: strlen(newPhone) < 5!!!\n";
    }
}

void Student::setAddress(const char* newAddress)
{
    if (strlen(newAddress) >= 5) {
        strcpy_s(address, 40, newAddress);
    }
    else {
        cout << "Error: strlen(newAddress) < 5!!!\n";
    }
}

void Student::setSchoolName(const char* newSchoolName)
{
    if (strlen(newSchoolName) >= 5) {
        strcpy_s(schoolName, 50, newSchoolName);
    }
    else {
        cout << "Error: strlen(newSchoolName) < 5!!!\n";
    }
}

void Student::setGroupNumber(const char* newGroupNumber)
{
    if (strlen(newGroupNumber) >= 5) {
        strcpy_s(groupNumber, 10, newGroupNumber);
    }
    else {
        cout << "Error: strlen(newGroupNumber) < 5!!!\n";
    }
}

const char* Student::getFullName()
{
    return fullName;
}

float Student::getAverageMark()
{
    return averageMark;
}

const char* Student::getPhone()
{
    return phone;
}

const char* Student::getAddress()
{
    return address;
}

const char* Student::getSchoolName()
{
    return schoolName;
}

const char* Student::getGroupNumber()
{
    return groupNumber;
}

void Student::showInfo()
{
    cout << "----------------------------\n";
    cout << "Full name: " << fullName << endl;
    cout << "Average mark: " << averageMark << endl;
    cout << "Phone number: " << phone << endl;
    cout << "Address: " << address << endl;
    cout << "School name: " << schoolName << endl;
    cout << "Group number: " << groupNumber << endl;
    cout << "----------------------------\n";
}