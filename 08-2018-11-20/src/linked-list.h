#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

/*
 * The value stored in the Linked List and its "constructor"
 */

struct NodeData {
	int id;
};

NodeData *newNodeData(int id);

/*
 * A linked list interior node
 */
struct Node {
	NodeData *data;
	Node *next;
};

/*
 * The linked list itself and its "constructor"
 */

struct LinkedList {
	Node *head;
};

LinkedList *newLinkedList();

/*
 * Maintain the linked list in ascending order of id.
 */

// Insert in order, allowing duplicates
void insertLinkedList(LinkedList *list, NodeData *data);

// Delete the first element in the list equal to the NodeData input.
//  Return whether something was actually deleted
bool deleteLinkedList(LinkedList *list, NodeData *data);

// Deallocate the entire list, including its NodeData objects
void destroyLinkedList(LinkedList *list);

// Write the list elements in order to the console
void printLinkedList(LinkedList *list);

#endif /* LINKED_LIST_H_ */

