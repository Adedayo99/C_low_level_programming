#ifndef DOG_H
#define DOG_H

/**
* struct dog - a rule to generate composite vars for dogs
*@name : name ppt
*@age: age ppt
*@owner: owner ppt
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

 void init_dog(struct dog *d, char *name, float age, char *owner);
