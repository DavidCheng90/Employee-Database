#include "Employee.h"
#include <vector>
#include <iostream>
using namespace std;

void AddEmployee(vector<Employee*>& emps);
void RemoveEmployee(vector<Employee*>& emps);
void SaveEmployees(vector<Employee*>& emps);

int main()
{
	vector<Employee*> emps;

	bool done = false;

	while (!done)
	{
		int input = 0;
		cout << "1) Add an Employee, 2) Delete an Employee, 3) Save Database, 4) Exit: ";
		cin >> input;

		switch (input)
		{
		case 1:
			AddEmployee(emps);
			break;
		case 2:
			RemoveEmployee(emps);
			break;
		case 3:
			SaveEmployees(emps);
			break;
		case 4:
			done = true;
			break;
		}
	}

	for (size_t i = 0; i < emps.size(); ++i)
		delete emps[i];
}

void AddEmployee(vector<Employee*>& emps)
{
	int type = 0;
	cout << "Enter type of employee: 1) Manager, 2) Engineer, 3) Researcher: ";
	cin >> type;

	switch (type)
	{
	case 1:
		emps.push_back(new Manager);
		break;
	case 2:
		emps.push_back(new Engineer);
		break;
	case 3:
		emps.push_back(new Researcher);
		break;
	}
}

void RemoveEmployee(vector<Employee*>& emps)
{
	std::string lastName;
	cout << "Enter the last name of the employee to remove: ";
	cin >> lastName;

	for (size_t i = 0; i < emps.size(); ++i)
	{
		if (lastName == emps[i]->getLastName())
		{
			delete emps[i];
			emps.erase(emps.begin() + i);
			break;
		}
	}
}

void SaveEmployees(vector<Employee*>& emps)
{
	ofstream fout("data.txt");
	for (size_t i = 0; i < emps.size(); ++i)
		emps[i]->save(fout);

	fout.close();
}