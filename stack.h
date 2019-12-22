#include "node.h"

class Stack{
    private:
        Node *top;
        
    public:
        Stack();
        bool isEmpty();
        void push(int val);
        int pop();
        int count();
};

 