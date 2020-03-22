#include <iostream>
using namespace std;

struct node{
     int index;
     int value;
     node* next;
};

void init(node *&tab){
    tab = NULL;
}

int value(node *tab, int n){

    while(tab){
            if(tab->index == n)
                return tab->value;
            tab = tab->next;
    }
    return 997;
}

void set(node *&tab, int n, int value){
    while(tab){
        if(tab->index == n){
            tab->value = value;
            return;
        }
        tab = tab->next;
    }
    node *added = new node;
    added->index = n;
    added->value = value;
    added->next = tab;
    tab = added;
    return;
}



int main()
{

}
