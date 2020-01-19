#include <iostream>

using namespace std;

template <class anyType>
class list{
    anyType info;
    list *next;
public:
    list(anyType a);
    void add(list *node){
        node->next = this;
        next = 0;
    }
    list *getNext(){
        return next;
    }
    anyType getData(){
        return info;
    }
};

template <class anyType> list<anyType> :: list(anyType a){
    info = a;
    next = 0;
}
/*
template <class anyType> void list<anyType> :: add(list *node){
    node->next = this;
    next = 0;
}

template <class anyType> list list<anyType> :: *getnext(){
    return next;
}

template <class anyType> anyType list<anyType> :: getData(){
    return info;
}
*/
int main()
{
    list<char> start('a');
    list<char> *p, *last;

    int i;

    // build list
    last = &start;
    for(i=1;i<26;i++){
        p = new list<char> ('a'+i);
        p->add(last);
        last = p;
    }

    // follow the list
    p = &start;
    while(p){
        cout << p-> getData() << " ";
        p = p->getNext();
    }

    return 0;
}
