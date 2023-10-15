#include "dog.h"

/**
* print_dog - prints a struct dog
*@d: dog identification
*
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %d\n", d->age);
	printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}

