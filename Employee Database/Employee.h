#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <fstream>

class Employee
{
public:
	Employee();
	virtual ~Employee();

	std::string getLastName()const;

	virtual void save(std::ofstream& fout)const = 0;

protected:
	std::string mFirstName;
	std::string mLastName;
	int mSalary;
};

class Manager : public Employee
{
public:
	Manager();
	~Manager();

	void save(std::ofstream& fout)const;

protected:
	int mNumMeetings;
	int mNumDaysVacation;
};

class Engineer : public Employee
{
public:
	Engineer();
	~Engineer();

	void save(std::ofstream& fout)const;

protected:
	bool mKnowsCPP;
	int mNumYearsXP;
	std::string mType;
};

class Researcher : public Employee
{
public:
	Researcher();
	~Researcher();

	void save(std::ofstream& fout)const;

protected:
	std::string mSchoolName;
	std::string mThesisTopic;
};


#endif // EMPLOYEE_H
