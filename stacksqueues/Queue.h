//********************************** Queue.h *************************************
//                    generic doubly linked list based queue


#ifndef DLL_QUEUE
#define DLL_QUEUE

#include <list>

using namespace std;

template<class T>
class Queue{
  private:
    list<T> lst;

  public:
    Queue(){}
    void clear(){
      lst.clear();
    }
    bool isEmpty() const {return lst.empty();}
    T& front(){return lst.front();}
    void enqueue(const T&);
    T dequeue();
};

template<class T>
void Queue<T>::enqueue(const T& el){
  lst.push_back(el);
}

template<class T>
T Queue<T>::dequeue(){
  T ret= lst.front();
  lst.pop_front();
  return ret;
}

#endif
