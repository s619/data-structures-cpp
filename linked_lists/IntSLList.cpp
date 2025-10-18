#include "IntSLList.h"



IntSLList::~IntSLList(){
  for (IntSLLNode *p; !isEmpty();){
    p=head->next;
    delete head;
    head=p;
  }
}

void IntSLList::addToHead(int x){
  head=new IntSLLNode(x,head);
  if (tail==nullptr)
    tail=head;
}
void IntSLList::addToTail(int x){
  if (tail){
  tail->next= new IntSLLNode(x);
  tail=tail->next;
  }
  else
    tail=head= new IntSLLNode(x);
}

int IntSLList::deleteFromHead(){
  int x=head->data;
  IntSLLNode *p=head;
  
  if (head==tail)
    head=tail=nullptr;
  
  else
    head=head->next;

  delete p;
  return x;
}

int IntSLList::deleteFromTail(){
  int x = tail->data;
  if (head==tail){
    delete tail;
    head=tail=nullptr;
    }
  else{
    IntSLLNode* p=head;
    while(p->next!=tail){
      p=p->next;
    }
    delete tail;
    tail=p;
    tail->next=nullptr;
  }
  return x;
}

void IntSLList::deleteNode(int x){
  if (head==tail && head->data==x){
    delete head;
    head=tail=nullptr;
  }
  else if (head->data==x){
    IntSLLNode* p=head;
    head=head->next;
    delete p;
    }
  else{
    IntSLLNode* p=head;
    IntSLLNode* q=head->next;
    while (q){
      if (q->data==x){
        p->next=q->next;
        if (q==tail) tail=p;
        delete q;
        break;
        }
      p=q;
      q=q->next;
      }
    }
  
}

bool IntSLList::isInList(int x) const {
  IntSLLNode* p=head;
  for (p;p!=nullptr && !(p->data==x);p=p->next);
  return p!=nullptr;
}

void IntSLList::setHead(IntSLLNode* p){
  head=p;
}
void IntSLList::setTail(IntSLLNode* p){
  tail=p;
}

IntSLLNode* IntSLList::getHead() const{
  return head;
}
IntSLLNode* IntSLList::getTail() const{
  return tail;
}
