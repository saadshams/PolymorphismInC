#include "person.h"
#include "employee.h"
#include <stdio.h>

int main() {

	Person *person = NewPerson("John Doe");
    person->print(person); // print name

    puts("------");

    person = (Person *) NewEmployee("Jane Doe", "Acme"); // Assign subclass instance to parent pointer
    person->print(person); // print name and company

	return 0;
}