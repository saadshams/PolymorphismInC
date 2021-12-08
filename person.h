#ifndef _PERSON_H
#define _PERSON_H

typedef struct Person Person;

struct Person {
	char *name;
	void (*print)(const Person *self); // function pointer to print person
};

Person* InitPerson(Person *self, const char *name);

Person* NewPerson(const char *name);

#endif