#include "person.h"

typedef struct Employee Employee;

struct Employee {
	Person person;  // composition approach (vs. inheritance)
	char *company;  // introducing additional field
};

Employee* InitEmployee(Employee *self, const char *name, const char *company);

Employee* NewEmployee(const char *name, const char *company);