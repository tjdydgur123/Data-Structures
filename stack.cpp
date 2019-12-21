#include "stack.h"  
#include <iostream>

using namespace std;

Stack::Stack(){ // constructor
    top = -1;
    for(int i=0; i<5; i++){
        arr[i] = 0; // here 0 means no element
    }
}

bool Stack::isEmpty(){ // tells if the stack is empty or not
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool Stack::isFull(){ // tells if the stack is full or not
    if(top == 4){
        return true;
    }
    else{
        return false;
    }
}

void Stack::push(int val){ // place an item onto the stack
    if(isFull()){
        cout << "Stack overflow" << endl;
    }
    else{
        top++;
        arr[top] = val;
    }
}

int Stack::pop(){ // return the item at the top of the stack
    if(isEmpty()){
        cout << "Stack underflow" << endl;
        return 0;
    }
    else{
        int popValue = arr[top];
        arr[top] = 0; // 0 means empty
        top--;
        return popValue;
    }
}

int Stack::count(){ // get the number of items in the stack
    int num = top + 1;
    cout << "Number of element in the stack: " << num << endl;
    return num;
}

int Stack::peek(int pos){ // access the item at the i position
    if(isEmpty()){
        cout << "Stack underflow" << endl;
        return 0;
    }
    else{
    return arr[pos];
    }
}

void Stack::change(int pos, int val){ // change the item at the i position
        arr[pos] = val;
}

void Stack::display(){ // display all items in the stack  LIFO order
    for(int i = top; i >= 0; i--){
        cout << arr[i] << endl;
    }
}