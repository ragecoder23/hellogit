#include "student.h"


student::student()
{}

student::student(int Num, string Name)
{
	name = Name;
	num = Num;
}

void student::setName(string Name)
{
	name = Name;
}

void student::setNum(int Num)
{
	num = Num;
}

string student::getName()
{
	return name;
}

int student::getNum()
{
	return num;
}
