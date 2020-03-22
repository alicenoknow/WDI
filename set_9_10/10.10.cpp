#include <iostream>
using namespace std;

struct node*
{
    int value;
    node* next;
};

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

void print(node* first)
{
    while(first)
    {
        cout<<first->value<<"  ";
        first = first->next;
    }
    cout<<endl;
}

node* _usuwanko(node* first)            //jakos wykminic jak zbierac te wartosci nowej listy
{
    if(first == NULL) return;
    node* tmp = first;
    node* tmp2;
    int maxi = tmp->value;

    while(tmp != NULL)
    {
        if(tmp->value>maxi)
        {
            tmp2 = tmp;
            maxi = tmp->value;
        }
        tmp = tmp->next;
    }
    maxi = 0;
    usuwanko(tmp2->next);

}

node* usuwanko(node* first)
{
    node* res = new node;
    res->next = NULL;
}


int main()
{
    node* first = NULL;
    addLast(first,1);
    addLast(first,19);
    addLast(first,12);
    addLast(first,11);
    addLast(first,13);
    addLast(first,24);
    addLast(first,23);
    addLast(first,22);
    print(first);
    usuwanko(first);
    print(first);
}
