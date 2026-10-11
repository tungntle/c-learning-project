#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

typedef struct Employee {
	char *name;
	int *age;
	int salary;
} employee_t;

int main() {
	int x = 42;
	int *ptr = &x;
	employee_t e = {
		.name = "Le Nguyen Thanh Tung",
		.age = &x,
		.salary = 31000000
	};
	employee_t *ptrToEmployee = &e;


	// printf("The value that ptr point to: %d\n", *ptr);
	// printf("The address of ptr: %p\n", ptr);

	printf("Access address age of e: %p\n", ptrToEmployee->age);
	printf("Access value age of e: %d\n", *ptrToEmployee->age);

	// printf("Employee name: %s\n", e.name);
	// printf("Employee age: %p\n", (void *)e.age);
	// printf("Employee salary: %d\n", e.salary);

	// printf("X address: %p\n", (void *)ptr);
	// printf("Pointer address: %p\n", (void *)&ptr);
	// printf("Value that pointer point to: %d\n", *ptr);

	// printf("size of char = %zu byte\n", sizeof(char));
	// printf("size of bool = %zu\n", sizeof(bool));
	// printf("size of int = %zu\n", sizeof(int));
	// printf("size of float = %zu\n", sizeof(float));
	// printf("size of double = %zu\n", sizeof(double));
	// printf("size of size_t = %zu\n", sizeof(size_t));


}

