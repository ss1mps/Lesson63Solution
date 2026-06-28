#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:

	string name;
	int age;
	//double mark;
	char gender;	
	bool alive;
	int* marks;
	int count;

public:

	Student();

	Student(string name, int age);

	Student(int age, string name);

	Student(string name, int age, char gender, bool alive, int* marks, int count);

	Student(const Student* student);

	~Student();

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	char getGender();
	void setGender(char gender);

	bool isAlive();
	void setAlive(bool alive);

	int getCountMark();
	int* getMarks();
	void setMarks(int* marks, int count);

	string toString();
};