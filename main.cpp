#include <vector>
#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void fillClass(vector<student>&);
void printClass(vector<student>&);
int linearSearch( auto data, auto key);

int main()
{
		string key;
		key =" ";
		
		vector <student> myClass;
		
		fillClass(myClass);
		printClass(myClass);
		
		
		linearSearch(myClass,key)
		
	
}

void fillClass(vector<student>& newMyClass)
{
	int num;
	string name;
	
	for (int i=0;i<=3;i++)
	{
		cout << "Name: ";cin >> name; cout << endl;
		cout << "Num: "; cin >> num; cout << endl;
	    
	    
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

int linearSearch( auto data, auto key)
{
	cout << "Enter name to search" << endl;
	cin >> key;
	
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] == key)
		return -1;
		
	}	
