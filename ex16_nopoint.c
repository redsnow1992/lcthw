#include <stdio.h>

struct Person
{
    char* name;
    int age;
    int height;
    int weight;
};


struct Person Person_create(char* name, int age, int height, int weight)
{
    struct Person p;

    p.name = name;
    p.age = age;
    p.height = height;
    p.weight = weight;

    return p;
}

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
	struct Person p = Person_create("Tom", 1, 2, 3);

    Person_print(p);

	return 0;
}
