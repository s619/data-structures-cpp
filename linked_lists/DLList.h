//*************************************** DLList.h *****************************************
//                                generic doubly linked list

#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST


template<class T>
class DLLNode{
  public:
    T data; 
    DLLNode *next, *prev;
    DLLNode():next(nullptr),prev(nullptr){};
    DLLNode(const T& elt, DLLNode *p=nullptr, DLLNode *q=nullptr):data(elt),next(p),prev(q){};
};

template<class T>
class DLList{
  public:
    DLList():head(nullptr),tail(nullptr){};
    void addToTail(const T&);
    T deleteFromTail();
  protected:
    DLLNode<T> *head, *tail;
};

#endif




