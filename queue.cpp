#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue(){ // constructor
    front = -1;
    rear = -1;
    for(int i=0; i < 5; i++){
        arr[i] = 0;
    }
}

bool Queue::isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

bool Queue::isFull(){
    if(rear == size(arr) - 1){
        return true;
    }
    else{
        return false;
    }
}

void Queue::enqueue(int val){
    if(isFull){
        cout << "queue is full" << endl;
        return;
    }
    else if(isEmpty()){
        front = 0;  // both for index 0
        rear = 0;
        arr[rear] = val;
    }
    else{
        rear++;
        arr[rear] = val;
    }
}

int Queue::dequeue(){
    int x = 0;
    if(isEmpty()){
        cout << "queue is empty" << endl;
        return 0;
    }
    else if(front == rear){
        x = arr[front];
        arr[front] = 0;
        front = -1;
        rear = -1;
        return x;
    }
    else{
        x = arr[front];
        arr[front] = 0;
        front++;
        return x; 
    }
}

int Queue::count(){
    int num = rear - front + 1;
    return num;
}

void Queue::display(){
    for(int i = front; i >=rear; i--){
        cout << arr[i] << endl;
    }
}

