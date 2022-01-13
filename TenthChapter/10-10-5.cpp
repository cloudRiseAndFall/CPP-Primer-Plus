#include "10-10-5.h"
#include <cstring>
#include <iostream>

Stack::Stack()
{
    bottomptr = topptr = &head;
}
Stack::~Stack()
{

}
void Stack::push(const Item & cus)
{
    Node * add = new Node;
    add->data = cus;
    add->next = topptr;
    topptr = add;
}
void Stack::pop(Item & cus)
{
    if (topptr == bottomptr)
        std::cout << "Stack is empty." << std::endl;
    else
    {
        cus = topptr->data;
        Node * del = topptr;
        topptr = topptr->next;
        delete del;
    }
}
