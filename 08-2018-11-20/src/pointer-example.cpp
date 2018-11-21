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
	// A data value
	float f = 2.5;

	// pf is a pointer to a float, but not pointing to anything yet
	float* pf;
	// Make pointer pf point to float f
	pf = &f;

	// This displays an address
	cout << pf << endl;
	// This displays the value of what pf is pointing to
	cout << *pf << endl;

	// Pointers to structures work exactly the same
	SimpleStruct ss;
	SimpleStruct* pss;
	pss = &ss;

	// Demonstrates pointer arithmetic.  pss+1 == pss + the size
	//  of a SimpleStruct

	cout << pf << " " << pss << endl;
	cout << pf +1 << " " <<pss+1 << endl;


	// void pointer -- Sometimes we store the address of
	//  something but we don't know the type.   void* is
	//  "typeless pointer"

	void* vp;

	// dynamically allocate a double and a SimpleStruct
	//  malloc returns a certain number of bytes, but it returns
	//   a void* so the result has to be cast to its intended type

	int* dynamic_int = (int*)malloc(sizeof(int));
	SimpleStruct* sss = (SimpleStruct*)malloc(sizeof(SimpleStruct));

	// After allocating the space, we can dereference the pointer
	//  and treat it like an int or SimpleStruct
	*dynamic_int = -123;

	// These two ways of accessing a field in a pointer to a struct
	//  are the same.  The second looks nicer and it's the one
	//  typically used by programmers.

	(*sss).x = 99;
	sss->y = 199;
	cout << *dynamic_int << " " << sss->x << endl;

	// If you allocate using malloc, you need to deallocate
	//  using free otherwise you have a memory leak!
	free(dynamic_int);
	free(sss);
}
