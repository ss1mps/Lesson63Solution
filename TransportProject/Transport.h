#pragma once
#include "main.h"

class Transport
{
private:
	string name;
	string maodel;
	int power;
	int speed;
	int tank;

public:
	Transport();
	Transport(int tank);
	~Transport();

	int getTank();
	void setTank(int tank);

};

