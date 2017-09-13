#include<iostream>
#include<string>

#define STUDENT_H
using namespace std;

class student
{
	private:
		string name;
		int num;
		
	public:
		
		student(int,string);
		void setName(string);
		void setNum(int);
		string getName();
		int getNum();
		
};

