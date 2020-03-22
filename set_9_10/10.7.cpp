#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

void increase(node* &first)
{
    if(!first) return;
    node* tmp = first->next;
    node* prev = first;
    bool carry = false;
    node* buf = first;

    if(first->value == 9) carry = true;

   while(tmp)
   {
       if(tmp->value != 9) carry = false;
       if(!carry)
        if(tmp->value == 9)
        {
           carry = true;
           buf = prev;
        }
       prev = tmp;
       tmp = tmp->next;
       cout<<"tmp: "<<tmp<<endl;

   }
cout<<"carry: "<<carry<<endl;
cout<<"buf: "<<buf<<endl;
   if(carry)
   {
       if(buf == first && buf->value == 9)
       {
            first = new node;
            first->value = 1;
            first->next = buf;
       }
       else
        {
            buf->value++;
            buf=buf->next;
        }
       while(buf)
       {
           buf->value = 0;
           buf = buf->next;
       }
   }
   else
    prev->value++;
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

int main()
{
    node* first = NULL;

    addLast(first,2);
    addLast(first,4);
    addLast(first,9);

    print(first);
    increase(first);
    print(first);


}
