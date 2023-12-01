#include "DoubleLinkedList.h"

int main(void)
{
	EmployeeList list;
	employee e1 = {"Petar","Bojanic",99};
	employee e2 = {"Nikola","Jovanovic",89};
	employee e3 = {"Milan","Bajic",97};
	employee e4 = {"Boris","Milic",34};
	employee e5 = {"Dragan","Bojic",55};
	
	EmployeeListCreate(&list);

	EmployeeListInsert(&list, &e1, 0);
	EmployeeListInsert(&list, &e2, 0);
	EmployeeListInsert(&list, &e3, 3);
	EmployeeListInsert(&list, &e4, 3);
	EmployeeListInsert(&list, &e5, 1);

	EmployeeListDump(&list);

	return 0;
}