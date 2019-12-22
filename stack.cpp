#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack(){ // constructor
    top = NULL; // start with top equal empty
}

bool Stack::isEmpty(){ // tells if the stack is empty or not
    if(top == NULL){
        cout << "Stack is empty" << endl;
        return true;
    }
    else{
        cout << "Stack is not empty" << endl;
        return false;
    }
}

void Stack::push(int data){ // place an item onto the stack
    Node *n = new Node(data);
    if(top == NULL){
        top = n;
    }
    else{
        n->next = top;
        top = n;
    }
    cout << "Push value: " << data << endl;
}

int Stack::pop(){ // return the item at the top of the stack
    if(top == NULL){
        cout << "Stack is empty" << endl;
        return -1;
    }
    else{
        int popValue = top->data;
        Node *popElem = top;
        top = top->next;
        delete popElem;
        cout << "Pop value: " << popValue << endl;
        return popValue;
    }
}

int Stack::count(){ // get the number of items in the stack
    int count = 0;
    Node *current = top;
    while(current != NULL){
        current = current->next;
        count++;
    }
    cout << "Number of elements so far: " << count << endl;
    return count;
}