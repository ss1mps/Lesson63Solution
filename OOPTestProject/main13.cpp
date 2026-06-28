#include"Employer.h"

int main() {
	Employer* employer = new Employer();

	cout << employer->getName() << endl;

	delete employer;

	return 0;
}