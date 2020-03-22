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


int _dodawanko(node* first1, node* first2, node* &result)
{
    if(first1 != NULL)
    {
            result = new node;
            result->next = NULL;
            result->value = first1->value + first2->value + _dodawanko(first1->next, first2->next, result->next);
        if(result->value > 9)
        {
            int res = (result->value)/10;
            result->value %= 10;
            return res;
        }
    }

    return 0;
}

int dodawankoReszty(node* &first, node* last)
{
    if(first == last->next)   return 1;
    first->value += dodawankoReszty(first->next,last);
    if(first->value > 9)
    {
        int res = (first->value)/10;
        first->value %= 10;
        return res;
    }
    return 0;
}

node* dodawanko(node* first1, node* first2)
{
    node* result = NULL;
    node* tmp;

    int n1 = 0, n2 = 0;
    if(first1 == NULL)  return first2;
    if(first2 == NULL)  return first1;

    node* last;
    node* tmp1 = first1;
    node* tmp2 = first2;

    while(tmp1){  n1++;   tmp1 = tmp1->next;}
    while(tmp2){  n2++;   tmp2 = tmp2->next;}

     tmp1 = first1;
     tmp2 = first2;

    if(n1 > n2)
    {
        while(n1 > n2+1)  {tmp1 = tmp1->next;  n1--;}
        last = tmp1;
        tmp1 = tmp1->next;
        tmp = first1;
    }
    if(n2 > n1)
    {
        while(n1+1 < n2)  {tmp2 = tmp2->next;  n2--;}
        last = tmp2;
        tmp2 = tmp2->next;
        tmp = first2;
    }
node* buf = tmp;
node* head;
   if(_dodawanko(tmp1, tmp2, result) > 0)
   {
       if(dodawankoReszty(buf, last) > 0)
       {
           head = new node;
           head->value = 1;
           head->next = tmp;
       }
       else head = tmp;
   }
 last->next = result;
   return head;
}

int main()
{
    node* first1 = NULL;
    node* first2 = NULL;

    addLast(first1,9);
    addLast(first2,9);
    addLast(first1,9);
    addLast(first2,9);
    addLast(first1,9);
    addLast(first2,9);
    addLast(first1,9);
    addLast(first2,9);
    addLast(first1,8);
    addLast(first2,4);
    addLast(first1,0);
    addLast(first2,3);
    addLast(first2,2);
    addLast(first2,5);
    addLast(first2,3);

    cout<<"         "; print(first1);
    print(first2);

    node* wynik = dodawanko(first1,first2);
    print(wynik);
}
