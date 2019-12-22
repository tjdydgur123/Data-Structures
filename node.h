class Node{
    public:
        int data;
        Node *next;
        Node *front; // pointer used in queue
        Node *rear;  // pointer used in queue
        Node(int data){
            this->data = data;
            next = 0; // used 0 instead of NULL.
        }
};




