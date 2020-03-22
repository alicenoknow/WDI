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
    for(int i = 41; i > 0; i-=nowy)
    {   node* p;
        p = new node;
        p->value = i+62;
        p->next = first;
        first = p;
    }
    return;

}

void dziel(node* &first, node* &part)
{
    node* tmp;
    tmp = first;
    first = first->next;
    tmp->next = part;
    part = tmp;
    wypisz(part);
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

void split10(node* &first)
{
    node* part[10];
    for (int i=0; i<10; i++) part[i] = NULL;
    while(first)
    {
        int last = first->value%10;
        if(!part[last])
        {
            part[last] = first;
            first = first->next;
        }
        else
        {
            node* pom = first->next;
            first->next = part[last];
            part[last] = first;
            first = pom;
        }


    }

    for(int i = 0; i<0; i++)
        wypisz(part[i]);
   return;
}


int main()
{
    node* first1 = NULL;

    dodaj(first1, 2);
    wypisz(first1);
    cout<<endl;
    split10(first1);
    kasuj(first1);

}
