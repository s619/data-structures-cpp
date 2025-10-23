// ****************************** lStack.h *********************************************
//               generic stack implemented as a doubly linked list

#ifndef LL_STACK
#define LL_STACK

#include <list>

template<class T>
class lStack{
  private:
    list<T> lst;
  public:
    lStack(){}
    void clear(){
      lst.clear();
    }
    bool isEmpty() const{
      return lst.empty();
    }
    T& top(){
      return lst.back();
    }
    T pop(){
      T el=lst.back();
      lst.pop_back();
      return el;
    }
    void push(const T& el){
      lst.push_back(el);
    }
};

#endif
