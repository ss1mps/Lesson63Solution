#pragma once
#include"Human.h"

class Employer : public Human
{
private:
	double salary;
public:
	Employer();

	Employer(string name, int age);

	Employer(int age, string name);

	Employer(string name, int age, char gender, bool alive, double salary);

	Employer(const Employer* employer);

	~Employer();

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	char getGender();
	void setGender(char gender);

	bool isAlive();
	void setAlive(bool alive);

	int getSalary();
	void setSalary(double salary);

	string toString();
};

