#include "person.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void print(const Person *self) {
	printf("Name: %s\n", self->name);
}

Person* InitPerson(Person *self, const char *name) {
    self->name = strdup(name);
    self->print = print; // providing default implementation
    return self;
}

Person* NewPerson(const char *name) {
    return InitPerson(malloc(sizeof(Person)), name);
}