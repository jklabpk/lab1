#include "l_zesp.h"
#include "list_el.h"
#include "list.h"


bool isEmpty(CListEl * element)
{
	return element == nullptr;
}

void insertAsFirstElement(CListEl * element)
{
	head = nullptr;
	tail = nullptr;
	element->nextElement = nullptr;
}

void insert(CListEl * element)
{
	if (isEmpty(element));

}
void remove(CListEl * element){}
void print(CListEl * element){}