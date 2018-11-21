#include "linked-list.h"

void linked_list_example() {
	NodeData *nd1 = newNodeData(1);
	NodeData *nd2 = newNodeData(2);
	NodeData *nd3 = newNodeData(3);

	LinkedList* ll = newLinkedList();
	insertLinkedList(ll, nd2);
	insertLinkedList(ll, nd3);
	insertLinkedList(ll, nd1);
	printLinkedList(ll);
	destroyLinkedList(ll);
}
