#include <vector>
#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void fillClass(vector<student>&);
void printClass(vector<student>&);

int main()
{
		vector <student> myClass;
		
		fillClass(myClass);
		printClass(myClass);
	
}

void fillClass(vector<student>& newMyClass)
{
	int num;
	string name;
	
	for (int i=0;i<=3;i++)
	{
		cout << "Name: ";
		cin >> name;
		cout << endl;
	    cout << "Num: " ;
	    cin >> num;
	    
	    
	    student newStudent(num, name);
	    newMyClass.push_back(newStudent);
	    
	    
	}
	
}

void printClass(vector<student>& newMyClass)
{
	for (int i=0;i<=3;i++)
	{
		cout << "Name: " << newMyClass[i].getName() << endl;
		cout << "Num: " << newMyClass[i].getNum() << endl;
		cout << endl;
	}
	
}
		
