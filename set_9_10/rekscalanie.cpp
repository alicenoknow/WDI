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

void add(node* &first, int n)
{
    node* buf = new node;
    buf->value = n;
    buf->next = first;
    first = buf;
}

node* recMerge(node* f1, node* f2)
{
    if(!f1) return f2;
    if(!f2) return f1;


    if(f1->value < f2->value)
    {
        f1->next = recMerge(f1->next, f2);
        return f1;
    }
    else
    {
        f2->next=recMerge(f1, f2->next);
        return f2;
    }
}

int main()
{
        node* first1 = NULL;
        node* first2 = NULL;

        for(int i = 10; i > 0; i--) {add(first1, i+2);   add(first2, (i+34)%13);}

        print(first1);
        print(first2);

        print(recMerge(first1,first2));
}
