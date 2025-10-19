#include "DLList.h"

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
