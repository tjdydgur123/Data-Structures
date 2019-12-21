class Queue{
    private:
        int arr[5];
        int front;
        int rear;

    public:
        Queue();
        bool isEmpty();
        bool isFull();
        void enqueue(int val);
        int dequeue();
        int count();
        void display();

};

int main()[
    Queue Q;

    
]