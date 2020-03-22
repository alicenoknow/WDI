#include <iostream>
#include <string>
using namespace std;

struct node
{
    string napis;
    node* next;
};

bool dodaj(node* &first, string nowy)
{
    node* tmp = first;

    if(first == NULL)
    {
        first = new node;
        first->napis = nowy;
        first->next = NULL;
        return true;
    }

    node* prev = first;
    while(first && (first->napis < nowy))
        {
            prev = first;
            first = first->next;
        }
    if(first != NULL && first->napis == nowy)   return false;

    node* newNode = new node;
    newNode->napis = nowy;
    newNode->next = first;

     if(first == prev)  first = newNode;
     else
    {
            prev->next = newNode;
            first = tmp;
    }

    return true;

}

void print(node* first)
{
    while(first)
    {
        cout<<first->napis<<endl;
        first = first->next;
    }
}

int main()
{
    node* first = NULL;

   cout<<dodaj(first, "aaaaaaa");
   cout<<dodaj(first, "asasaa");
   cout<<dodaj(first, "aasbda");
   cout<<dodaj(first, "abbaa");
   cout<<dodaj(first, "bbbaaa");
   cout<<dodaj(first, "aaaaaaa");
    print(first);

}
