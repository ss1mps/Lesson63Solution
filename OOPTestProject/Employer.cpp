#include "Employer.h"

Employer::Employer() {
	cout << "Employer default constructor\n";

}

Employer::Employer(int age, string name) : Employer(name, age) {
	cout << "Employer default constructor with arguments\n";
}

Employer::Employer(string name, int age, char gender, bool alive,
	double salary) : Human(name, age, gender, alive) {
	cout << "Employer canonical constructor\n";
	setName(name);
	setAge(age);
	setGender(gender);
	setAlive(alive);
	this->salary = salary;
}

Employer::Employer(const Employer* employer) : Human(employer) {
	cout << "Employer copy-constructor\n";
	this->salary = salary;
}

Employer::~Employer() {
	cout << "Employer destructor\n";
}

string Employer::getName() {
	return name;
}

void Employer::setName(string name) {
	this->name = name;
}

int Employer::getAge() {
	return age;
}

void Employer::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

char Employer::getGender() {
	return gender;
}

void Employer::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

bool Employer::isAlive() {
	return alive;
}

void Employer::setAlive(bool alive) {
	this->alive = alive;
}


int Employer::getSalary() {
	return salary;
}

void Employer::setSalary(double salary) {
	if (salary >= 0) {
		this->salary = salary;
	}
}

string Employer::toString() {
}