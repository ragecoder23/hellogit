#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class student
{
	private:
		string name;
		int num;
		
	public:
		
		student();		
		student(int,string);
		void setName(string);
		void setNum(int);
		string getName();
		int getNum();
		
};

#endif
