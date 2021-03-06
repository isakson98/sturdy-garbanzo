#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person() {};
	Person(string zname) : name(zname) {};
	string name;
	string address;
	int phone_number;
	string email;

	virtual void toString() = 0;
};

class Student : public Person {
public:
	string sname;
	Student(string uname) : sname(uname) {};
	string status;
	void toString() {
		cout << "Student: " << sname << endl;
	}
};

class Employee : public Person {
public:
	string ename;
	Employee() {};
	Employee(string uname) : ename(uname) {};
	string office;
	double salary;
	string date; // 01.02.2010
	void toString() {
		cout << "Employee: " << ename <<endl;
	}

};

class Faculty : public Employee {
public:
	string fname;
	Faculty() {};
	Faculty(string kname) : fname(kname) {};
	int hours;
	string rank;
	void toString() {
		cout << "Faculty: " << fname<< endl;
	}

};

class Staff : public Employee {
public:
	string sname;
	Staff() {};
	Staff(string pname) :sname(pname) {};
	string title;
	void toString() {
		cout << "Staff: " << sname << endl;
	}
};

class MyDate {
public:
	int year;
	int month;
	int day;

};



int main() {
	Person *Z = new Student("Mary");
	//Z->Person::toString();

	Person *A = new Student("Steve");
	Person *B = new Employee("Rogers");
	Person *C = new Faculty("Tony");
	Person *D = new Staff("Stank");


	A->toString();
	B->toString();
	C->toString();
	D->toString();

	system("pause");
	return 0;
}