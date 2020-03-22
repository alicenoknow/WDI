#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

node* makeList(int n)
{
    node* f = NULL;
    node* buf = NULL;
    while(n)
    {
        buf = new node;
        buf->value = n%10;
        n /= 10;
        buf->next = f;
        f = buf;

    }
    return f;
}

bool isPrime(int n)
{
    if(n < 4)    return n>1;
    if(n%2 == 0 || n%3 == 0) return false;

    int p = 3;

    while(p*p<=n)
    {
        if(n%p == 0)
            return false;
        p+=2;

        if(n%p == 0)
            return false;
        p+=4;

    }
    return true;
}

int NWD(int a, int b)
{
    int c = b;
    while(b)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int NWW(int a, int b)
{
    return a*b/NWD(a,b);
}

void print(node* f)
{
    int i = 7;
    while(i)
    {
        cout<<f->value<<"  ";
        f = f->next;
        i--;
    }
    cout<<endl;
}

void deleteEl(node* &prev, node* &curr)
{
    prev->next = curr->next;
}

bool deleteKtimes(node* &f, int k)
{
    if(f == NULL) return false;

    node* tmp = f->next;
    int j = 1;
    while(tmp != f)
    {
        tmp = tmp->next;
        j++;
    }
    node* curr = f;
    bool del = false;
    int d,n;
    int i = j;

    while(i)
    {
        tmp = curr;
        n = curr->value;
        int l = 1;
        while(tmp->next != curr)
        {
            if(tmp->next->value == n) l++;
            if(del && tmp->next->value == d)
            {
                deleteEl(tmp, tmp->next);
            }

            tmp = tmp->next;
        }
        if(l == k)
        {
            d = n;
            del = true;
        }
        else del = false;

        curr = curr->next;
        i--;
    }
    node* buf = tmp;
    if(del)
    {
        print(tmp);
        while(buf != tmp->next)
        {
            if(n == buf->next->value)
            {
                deleteEl(buf,buf->next);
            }

            buf = buf->next;
        }
    }

    f = tmp;
    if(f == f->next)
        {
            if(k == 1)
            {
                delete f;
                f = NULL;
            }
            else return false;
        }
        int e = 1;
    while(tmp->next != f)
    {
        e++;
        tmp = tmp->next;
    }
    cout<<"e: "<<e<<" j: "<<j;
    if(j == e) return false;
    return true;

}

int main()
{
    node* first = makeList(1234533);
    node* tmp = first;
    while(tmp->next)
        tmp = tmp->next;
    tmp->next = first;

    cout<<deleteKtimes(first, 5);

}
