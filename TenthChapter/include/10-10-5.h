#ifndef TTFIVE_H_
#define TTFIVE_H_
static double sum = 0.0;

struct Customer
{
    char fullname[35];
    double payment;
};
typedef Customer Item;

struct Node
{
    Item data;
    Node * next;
};
class Stack
{
private:
    Node head;
    Node * bottomptr, * topptr;
public:
    Stack();
    ~Stack();
    void push(const Item & cus);
    void pop(Item & cus);
    
};

#endif