#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue(){
    front = NULL; // start with front equal NULL
    rear = NULL; // start with rear equal NULL
}

bool Queue::isEmpty(){
    if(front == NULL && rear == NULL){ 
        cout << "Queue is empty" << endl;
        return true;
    }
    else{
        cout << "Queue is not empty" << endl;
        return false;
    }
}

void Queue::enqueue(int data){
    Node *n = new Node(data);
    if(rear == NULL){
        front = n;
        rear = n;
    }
    else{
        rear->next = n;
        rear = n;
    }
    cout << "Euqueue value: " << data << endl;
}

int Queue::dequeue(){
    if(front == NULL){ // 비어있을 때
        cout << "Queue is empty" << endl;
        return -1;
    }

    Node *temp = front;
    int dequeueValue = front->data;
    if(front == rear){ // 하나만 있을 때
        front = NULL;
        rear = NULL;
    }
    else{ // 두 개 이상
        front = front->next;
    }
    delete temp;
    cout << "Dequeue value: " << dequeueValue << endl;
    return dequeueValue;
    
}

int Queue::count(){
    int count = 0;
    Node *current = front; 
    while(current != NULL){
        current = current->next;
        count++; 
    } 
    cout << "Number of elements so far: " << count << endl;
    return count;
}

