#include <iostream>

using namespace std;

struct element{
    int e;
    element* next;
};

void dodaj(element* &first, int nowy)
{
    element* p;
    p = new element;
    p->e = nowy;
    p->next = first;
    first = p;
    return;

}

void kasuj(element* &p)
{
    element* pomoc;
    while(p)
    {
       pomoc=p->next;
       delete p;
       p=pomoc;
    }
}

void wypisz(element* p)
{
    while(p != NULL)
    {
        cout<<p->e<<"  ";
        p=p->next;
    }
    cout<<endl;
}

bool czyElement(element* p, int n)
{
     while(p != NULL)
    {
        if(p->e == n) return true;

        p=p->next;
    }
    return false;
}

void usun(element* &first, int n)
{
   if(first == NULL) return;
    element* prev = NULL;
    element* curr = first;
    if(first->e == n)
   {    first = first->next;
        delete curr;
   }

    while(curr != NULL && curr->e != n)
    {
        cout<<"curr  "<<curr<<"  curr->e  "<<curr->e<<endl;
        prev = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        if(prev->e == n)
        {
            prev->next = NULL;
            delete curr;
        }
        return;
    }
    prev->next = curr->next;
    delete curr;
    return;

}

int main()
{
    element* first = NULL;

    dodaj(first,3);
    dodaj(first,5);
    dodaj(first,8);
    dodaj(first,2);
//    wypisz(first);
//    cout<<endl;
    usun(first, 5);
    wypisz(first);
//    kasuj(first);


}


