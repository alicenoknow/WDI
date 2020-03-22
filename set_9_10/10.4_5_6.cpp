#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

void print(node* first)
{
    while(first)
    {
        cout<<first->value<<"  ";
        first = first->next;
    }
    cout<<endl;
}

void deleteList(node* &first)
{
    node* pom = first;
    while(first)
    {
        pom = first;
        first=first->next;
        delete pom;
    }
    delete first;
}

void addLast(node* &first, int newVal)
{
    node* tmp = first;
    if(!first)
    {
        first = new node;
        first->value = newVal;
        first->next = NULL;
        return;
    }
    while(tmp->next) tmp = tmp->next;

    tmp->next = new node;
    tmp->next->value = newVal;
    tmp->next->next = NULL;
    return;
}

void deleteLast(node* first)
{
    node* tmp = first;
    if(!first) return;
    if(!first->next)
    {
        delete first;
        return;
    }
    while(tmp->next->next)  tmp = tmp->next;

    delete tmp->next;
    tmp->next = NULL;
    return;
}

void deleteEverySecond(node* &first)
{
    if(!first->next) return;

    node* afterSec = first->next->next;
    node* after = first->next;
    node* tmp = first;

    while(after)
    {
        delete after;
        tmp->next = afterSec;
        if(afterSec)   tmp = afterSec;
        if(tmp->next)
        {
            after = tmp->next;
            afterSec = after->next;
        }
        else break;

    }

}

int main()
{
    node* first = NULL;

    addLast(first, 1);
    print(first);
    addLast(first, 5);
    addLast(first, 2);
    addLast(first, 5);
    addLast(first, 2);
    addLast(first, 5);
    addLast(first, 2);
    print(first);
    deleteEverySecond(first);
    print(first);
}
