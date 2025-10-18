//**************************intSLList.h*********************************
//          singly-linked list class to store integers

#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode{
  public:
    int data;
    IntSLLNode* next;
    IntSLLNode():next(nullptr){}
    IntSLLNode(int a, IntSLLNode* p=nullptr):data(a),next(p){}
};

class IntSLList{
  private:
    IntSLLNode* head;
    IntSLLNode* tail;
  public:
    IntSLList():head(nullptr),tail(nullptr){}
    ~IntSLList();
    int isEmpty(){
      return head==nullptr;
    }
    void addToHead(int);
    void addToTail(int);
    int deleteFromHead();
    int deleteFromTail();
    void deleteNode(int);
    bool isInList(int) const;
    void setHead(IntSLLNode*);
    void setTail(IntSLLNode*);
    IntSLLNode* getHead() const;
    IntSLLNode* getTail() const;
    

};

#endif




