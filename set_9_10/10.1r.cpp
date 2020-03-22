#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

void wstaw(node* &prev, node* &neww)
{
    node* pom1;
    node* pom2;
    pom1 = prev->next;
    prev->next = neww;
    pom2 = neww->next;
    neww->next = pom1;
    neww = pom2;
    return;

}

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


void _mergeLists(node* &p1, node* &p2)
{
    node* curr;
    node* pom;

    if(!p2) return;
    if(!p1) return;

    if(p1->value == p2->value) return _mergeLists(p1->next, p2);

    if(p2->next == NULL)
    {   wstaw(p2,p1);
        return _mergeLists(p1, pom);
    }

    curr = p2->next;

    if(p1->value < curr->value)         //nie wstawia na poczatek, czy to curr = p2-> next ma sens wgl
    {   wstaw(p2,p1);
        return _mergeLists(p1, p2->next);
    }

        return _mergeLists(p1, p2->next);
}

node* mergeLists(node* &p1, node* &p2)
{
    if(!p2) return p1;
    if(!p1) return p2;

    _mergeLists(p1,p2);

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
    wypisz(mergeLists(first2,first1));
    //wypisz(first2);

    kasuj(first1);
    kasuj(first2);
}

