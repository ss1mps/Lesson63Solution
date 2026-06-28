#pragma once
#include "Student.h"

Student::Student() : Student("", 0, 'm', false, NULL, 0) {
	cout << "Students default constructor\n";
	//name = "";
	//age = 0;
	//alive = false;
	////mark = 0;

	//marks = NULL;
	//count = 0;

	//gender = '\0';
}

Student::Student(string name, int age) : Student() {
	cout << "Students default constructor with arguments\n";
	this->name = name;
	this->age = age;
}

Student::Student(int age, string name) : Student(name, age) {
	cout << "Students default constructor with arguments\n";
}

Student::Student(string name, int age, char gender, bool alive, int* marks,
	int count) { //int mark
	cout << "Students canonical constructor\n";
	this->name = name;
	this->age = age;
	this->alive = alive;
	//mark = mrk;

	this->marks = marks;
	this->count = count;

	this->gender = gender;
}

Student::Student(const Student* student) : Student(student->name, student->age,
	student->alive, student->marks, student->count) {
	cout << "Students copy-constructor\n";
	name = student->name;
	age = student->age;
	alive = student->alive;
	//mark = student->mark;

	if (student->count > 0 && student->marks != nullptr) {
		marks = new int[student->count];

		for (int i = 0; i < student->count; i++)
		{
			marks[i] = student->marks[i];
		}
	}

	//marks = student->marks;
	count = student->count;

	gender = student->gender;
}

Student::~Student() {
	cout << "Students destructor\n";

	if (marks != nullptr) {
		delete[] marks;
		count = 0;
	}

}

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

char Student::getGender() {
	return gender;
}

void Student::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

int Student::getCountMark() {
	return count;
}

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* marks, int count) {
	if (count > 0 && marks != nullptr) {
		if (marks != nullptr) {
			delete[] marks;
		}
		this->marks = marks;
		this->count = count;
	}
}

string Student::toString() {
	string s = "";

	string mrks = "";

	for (int i = 0; i < count; i++) {
		mrks += to_string(*(marks + i)) + " ";
	}

	s = "Students: " + name + ", age = " + to_string(age)
		+ ", gender " + gender + ", mark = " + mrks
		+ ", alive = " + (alive ? "yes" : "no");

	return s;
}