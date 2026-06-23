#include "menager.h"

int main() {

	int* marks01 = new int[2]{ 7, 9 };
	int* marks02 = new int[3]{ 7, 9, 8};
	int* marks03 = new int[4]{ 7, 9, 9, 9};
	int* marks04 = new int[5]{ 7, 9, 10, 10, 9};
	int* marks05 = new int[6]{ 8, 9, 10, 8, 8, 8};

	student* st01 = new student("alex", 14, 'm', true, marks01, 2);
	student* st02 = new student("anna", 13, 'f', true, marks02, 3);
	student* st03 = new student("happy", 13, 'm', true, marks03, 4);
	student* st04 = new student("alice", 13, 'f', true, marks04, 5);
	student* st05 = new student("peter", 13, 'm', true, marks05, 6);


	student** group = new student * [5]{ st01, st02, st03, st04, st05 };

	menager* menager = new menager();

	cout << "average mark of student's list is " << menager->calculateavgmark(group, 5) << endl;

	delete[] group;

	delete st01;
	delete st02;
	delete st03;
	delete st04;
	delete st05;

	return 0;
}