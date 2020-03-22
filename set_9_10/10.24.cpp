#include <iostream>
#include <time.h>
#include <stdlib.h>
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

void deleteElement(node* &prevN,node* &tmpN, node* &prevS, node* &tmpS, int &k)
{
    k +=2;

    prevN->next = tmpN->next;
    prevS->next = tmpS->next;
    delete tmpN,tmpS;
    tmpS=prevS;
    tmpN=prevN;
};


int deleteCopies(node* &fSort, node* &fNope)
{
    if(fSort == NULL || fNope == NULL) return 0;
    int k = 0;
    node* tmpN = fNope;
    node* prevN = fNope;
    node* prevS = fSort;
    while(tmpN)
    {
        node* tmpS = fSort;
        prevS = tmpS;
        while(tmpS && tmpN->value >= tmpS->value)
        {
            if(tmpS->value == tmpN->value) deleteElement(prevN, tmpN, prevS, tmpS, k);
            if(tmpS == NULL)    break;
            prevS = tmpS;
            tmpS = tmpS->next;
        }
        prevN = tmpN;
        tmpN = tmpN->next;

    }
    return k;
}


int main()
{
        node* first1 = NULL;
        node* first2 = NULL;

        for(int i = 10; i > 0; i--) {add(first1, i+2);   add(first2, (i+34)%13);}

        print(first1);
        print(first2);

        cout<<endl<<"ile: "<<deleteCopies(first1,first2)<<endl;

        print(first1);
        print(first2);


}
