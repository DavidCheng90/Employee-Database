#include "Employee.h"

#include <iostream>
using namespace std;

Employee::Employee()
{
	cout << "Enter first name: ";
	cin >> mFirstName;

	cout << "Enter last name: ";
	cin >> mLastName;

	cout << "Enter salary: ";
	cin >> mSalary;
}

Employee::~Employee()
{
}

std::string Employee::getLastName()const
{
	return mLastName;
}

Manager::Manager()
{
	cout << "Enter the number of meetings: ";
	cin >> mNumMeetings;

	cout << "Enter the number of vacation days: ";
	cin >> mNumDaysVacation;
}

Manager::~Manager()
{
}

void Manager::save(ofstream& fout)const
{
	fout << "Manager" << endl;
	fout << "-------" << endl;
	fout << mFirstName << " " << mLastName << endl;
	fout << mSalary << endl;
	fout << mNumMeetings << endl;
	fout << mNumDaysVacation << endl;
}


Engineer::Engineer()
{
	cout << "Knows C++? (1) yes, (0) no: ";
	cin >> mKnowsCPP;

	cout << "Enter the number of years experience: ";
	cin >> mNumYearsXP;

	cout << "Enter the type of engineer (e.g., mechanical): ";
	cin >> mType;
}


Engineer::~Engineer()
{
}

void Engineer::save(ofstream& fout)const
{
	fout << "Engineer" << endl;
	fout << "--------" << endl;
	fout << mFirstName << " " << mLastName << endl;
	fout << mSalary << endl;
	fout << mKnowsCPP << endl;
	fout << mNumYearsXP << endl;
	fout << mType << endl;
}

Researcher::Researcher()
{
	cout << "Enter the school's name: ";
	cin >> mSchoolName;

	cout << "Enter the thesis topic: ";
	cin >> mThesisTopic;
}

Researcher::~Researcher()
{
}

void Researcher::save(ofstream& fout)const
{
	fout << "Researcher" << endl;
	fout << "----------" << endl;
	fout << mFirstName << " " << mLastName << endl;
	fout << mSalary << endl;
	fout << mSchoolName << endl;
	fout << mThesisTopic << endl;
}