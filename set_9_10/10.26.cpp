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

void mergeAsc(node* &fSort, node* &fNope)
{
    if(fNope == NULL) return;

    node* tmpS = fSort;
    node* tmpN = fNope;
    node* prevS = fSort;        //ostro nie dziala
    node* prevN = fNope;

    while(tmpN)
    {
        tmpS = fSort;
        prevS = fSort;

        while(tmpS && tmpN->value > tmpS->value)
        {
            cout<<"Nv: "<<tmpN->value<<"  Sv: "<<tmpS->value<<endl;
            print(fSort);
            prevS = tmpS;
            tmpS = tmpS->next;
        }

        if(prevS->value != tmpN->value)
        {
            node* buf = new node;
            buf->value = tmpN->value;
            buf->next = tmpS;
            prevS->next = buf;
        }

        prevN = tmpN;
        tmpN = tmpN->next;

    }
}

int main()
{
        node* first1 = NULL;
        node* first2 = NULL;

        for(int i = 10; i > 0; i--) {add(first1, i+2);   add(first2, (i+34)%13);}

        print(first1);
        print(first2);
        mergeAsc(first1,first2);
        print(first1);
}
