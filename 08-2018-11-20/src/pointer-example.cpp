#include <iostream>
using namespace std;

/*
 * Pointers in C/C++
 *   The symbol table, addresses, and pointers.
 *
 *   1. Establish a pointer to something which is already allocated
 *   2. "Pointer to" and "address of" operators
 *   3. Pointer arithmetic -- adding a constant to a pointer
 *   4. (Pointers and references)
 *   5. The "pointer to nothing"
 *       * memory allocation
 *       * generic container
 *   6. Pointer and memory allocation
 *       -- example of creating a new SimpleStruct
 *       -- heap space versus stack space
 *       -- the danger of passing pointers to stack-oriented variables
 */

struct SimpleStruct { int x; int y; };

void pointer_example() {
/*	float f = 2.5;
	float* pf;
	pf = &f;
	cout << pf << endl;
	SimpleStruct ss;
	SimpleStruct* pss;
	pss = &ss;
	cout << pf << " " << pss << endl;
	cout << pf +1 << " " <<pss+1 << endl;*/
	// void pointer
	//void* vp;
	// dynamically allocate a double and a SimpleStruct
	//int* dynamic_int;
	//dynamic_int = 123;
	int* dynamic_int = (int*)malloc(sizeof(int));
	SimpleStruct* ss = (SimpleStruct*)malloc(sizeof(SimpleStruct));
	*dynamic_int = -123;
	(*ss).x = 99;
	ss->y = 199;
	cout << *dynamic_int << " " << ss->x << endl;
	free(dynamic_int);
	free(ss);
}
