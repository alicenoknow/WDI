#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

void wypisz(node* p)
{
    while(p != NULL)
    {
        cout<<p->value<<"  ";
        p=p->next;
    }
    cout<<endl;
}

void dodaj(node* &first, int nowy)
{
    for(int i = 12; i > 0; i-=nowy)
    {   node* p;
        p = new node;
        p->value = i;
        p->next = first;
        first = p;
    }
    return;

}

void kasuj(node* &p)
{
    node* pomoc;
    while(p)
    {
       pomoc=p->next;
       delete p;
       p=pomoc;
    }
}


node* mergeLists(node* &p1, node* &p2)
{
    node* curr = p2;
    node* prev = p2;
    node* nnew = NULL;
    if(!p1) return p2;
    if(!p2) return p1;


    while(p1)
    {
        cout<<"p1: "<<p1->value<<"  curr: "<<curr->value<<endl;
        while(curr != NULL && p1->value > curr->value)
            {
                prev = curr;
                curr = curr->next;
            }
        if(curr == prev)
            {
                nnew = p1;
                p1 = p1->next;
                nnew->next = p2;
                p2 = nnew;
            }
        else if(p1->value != curr->value)
            {
                nnew = p1;
                p1 = p1->next;
                nnew->next = curr;
                prev->next = nnew;
            }

        if(p1->value == curr->value)
            p1 = p1->next;

    }
    return p2;
}


int main()
{
    node* first1 = NULL;
    node* first2 = NULL;

    dodaj(first1, 3);
    wypisz(first1);
    dodaj(first2, 2);
    wypisz(first2);
    cout<<endl;
    wypisz(mergeLists(first2,first1));  // nie dzialaaaa
    cout<<endl;

    kasuj(first1);
    kasuj(first2);
}
