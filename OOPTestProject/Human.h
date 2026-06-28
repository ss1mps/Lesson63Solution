#pragma once
#include<iostream>
#include<string>
using namespace std;
class Human {
protected:
	string name;
	int age;
	char gender;
	bool alive;
public:
	Human();

	Human(string name, int age);

	Human(int age, string name);

	Human(string name, int age, char gender, bool alive);

	Human(const Human* human);

	~Human();

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	char getGender();
	void setGender(char gender);

	bool isAlive();
	void setAlive(bool alive);

	string toString();
};

