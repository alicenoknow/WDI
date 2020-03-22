#include <iostream>
using namespace std;

struct node{
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

void rev(node* &p)
{
    node* cop = NULL;
    if(!p) return;
    if(!p->next) return;

    while(p)
    {
        node* nev;
        nev = p;
        p = p->next;
        nev->next = cop;
        cop = nev;

    }

    p = cop;
    return;
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


int main()
{
    node* p = NULL;
    dodaj(p,2);
    wypisz(p);
    rev(p);
    wypisz(p);
}
