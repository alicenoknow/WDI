#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

void add(node* &first, int n)
{
    node* buf = new node;
    buf->value = n;
    buf->next = first;
    first = buf;
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

bool hasCycle(node* first)
{
    if(first == NULL)   return false;
    node* p1 = first;
    node* p2 = first;

    while(p2->next && p2->next->next)
    {
        p1 = p1->next;
        p2 = p2->next->next;
        if(p1 == p2) return true;
    }
    return false;
}

int sizeCycle(node* first)
{
    int n = 1;
    if(first == NULL)   return 0;
    node* p1 = first;
    node* p2 = first;

    while(p2->next && p2->next->next)
    {
        p1 = p1->next;
        p2 = p2->next->next;
        if(p1 == p2)
        {
            node* start = p1;
            p1 = p1->next;
            while(p1 != start)
            {
                n++;
                p1 = p1->next;
            }
            return n;
        };
    }
    return 0;
}

int b4Cycle(node* first)
{
    int k = 0;
    if(first == NULL)   return 0;
    node* p1 = first;
    node* p2 = first;

    while(p2->next && p2->next->next)
    {
        p1 = p1->next;
        p2 = p2->next->next;
        if(p1 == p2)
        {
            node* buf = p1;
            p1 = first;
            while(p1 != p2)
            {
                p1 = p1->next;
                p2 = p2->next;
                k++;
            }
            return k;
        };
    }

}

int main()
{
    node* first = NULL;
    for(int i = 1; i < 10; i++)  add(first, i);
    print(first);
    node* tmp = first;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    node* tmp1 = first;
    for(int i = 1; i < 4; i++)tmp1 = tmp1->next;
    tmp->next = tmp1;

    cout<<endl<<"Ma: "<<hasCycle(first)<<endl;
    cout<<"Dl cyklu: "<<sizeCycle(first)<<endl;
    cout<<"ile b4: "<<b4Cycle(first);

}
