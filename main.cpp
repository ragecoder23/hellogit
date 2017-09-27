#include <vector>
#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void fillClass(vector<student>&);
void printClass(vector<student>&);
int linearSearch(vector<student>& , string key);

int main()
{
		string key;
		key =" ";
		
		vector <student> myClass;
		
		fillClass(myClass);
		printClass(myClass);
		
		
		cout << "Enter the name to search" << endl; 
		cin >> key;
		while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(myClass,key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;
		linearSearch(myClass);
		
	
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

int linearSearch(vector<student>& data,string key)
{
	
	
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].getName() == key)
		
		cout << key << " was found at " << i << endl; 
		
		return -1;
		
	}	
}
