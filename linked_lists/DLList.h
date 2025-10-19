//*************************************** DLList.h *****************************************
//                                generic doubly linked list

#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST


template<class T>
class DLLNode{
  public:
    T data; 
    DLLNode *next, *prev;
    DLLNode<T>():next(nullptr),prev(nullptr){};
    DLLNode<T>(const T& elt, DLLNode *p=nullptr, DLLNode *q=nullptr):data(elt),next(p),prev(q){};
};

template<class T>
class DLList{
  public:
    DLList():head(nullptr),tail(nullptr){};
    void addToTail(const T&);
    T deleteFromTail();
    T getTail();
    T getHead();
    void setTail(const T&);
    void setHead(const T&);
  protected:
    DLLNode<T> *head, *tail;
};

template<class T>
void DLList<T>::addToTail(const T& a){
  if (tail){
    tail = new DLLNode<T>(a, nullptr, tail);
    tail->prev->next=tail;
  }
  else
    head=tail=new DLLNode<T>(a);
}

template<class T>
T DLList<T>::deleteFromTail(){
  T x=tail->data;
  if (head==tail){
    delete head;
    head=tail=nullptr;
  }
  else{
    tail=tail->prev;
    delete tail->next;
    tail->next=nullptr;
  }
  return x;
}


template<class T>
T DLList<T>::getHead(){
  T x=head->data;
  return x;
}


#endif




