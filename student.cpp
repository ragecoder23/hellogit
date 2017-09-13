#include"student.h"
#include<string>
#include<iostream>


student::student(int Num, string Name);

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
