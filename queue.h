#include "node.h"

class Queue{
    private:
        Node *front;
        Node *rear;
        
    public:
        Queue();
        bool isEmpty();
        void enqueue(int val);
        int dequeue();
        int count();
};
