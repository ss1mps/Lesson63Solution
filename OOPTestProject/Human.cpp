#pragma once
#include "Human.h"

Human::Human() : Human("", 0, 'm', false, 0) {
	cout << "Human default constructor\n";
}

Human::Human(string name, int age) : Human() {
	cout << "Human default constructor with arguments\n";
	this->name = name;
	this->age = age;
}

Human::Human(int age, string name) : Human(name, age) {
	cout << "Human default constructor with arguments\n";
}

Human::Human(string name, int age, char gender, bool alive) {
	cout << "Human canonical constructor\n";
	this->name = name;
	this->age = age;
	this->alive = alive;
	this->gender = gender;
}

Human::Human(const Human* human) {
}

Human::~Human() {
}

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

char Human::getGender() {
	return gender;
}

void Human::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

bool Human::isAlive() {
	return alive;
}

void Human::setAlive(bool alive) {
	this->alive = alive;
}

string Human::toString() {
}