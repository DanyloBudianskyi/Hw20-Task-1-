#include "Student.h"

int main()
{
    Student a;
    Student b("Budianskyi Danylo", 4.7, "+38(099)11-11-111", "Kharkiv", "IT Step", "PV-311");
    
    a.showInfo();
    b.showInfo();

    cout << "\nStudent a name: " << a.getFullName() << endl;
    a.setFullName("John Doe");
    a.setAverageMark(3.2);
    cout << "\nStudent a name: " << a.getFullName() << " his average mark = " << a.getAverageMark() << endl;

}
