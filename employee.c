#include "employee.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void (*_print)(const Person *self); // to retain function if class wishes to reuse base functionality

static void print(const Employee *self) {
    _print(&self->person); // call base/super function - print name
	printf("Company: %s\n", self->company); // print company
}

Employee* InitEmployee(Employee *self, const char *name, const char *company) {
    InitPerson(&self->person, name); // base initializer
    self->company = strdup(company);

    _print = self->person.print; // retain base/super function before overriding
    self->person.print = (void (*)(const Person *)) print; // override
    return self;
}

Employee* NewEmployee(const char *name, const char *company) {
    return InitEmployee(malloc(sizeof(Employee)), name, company);
}