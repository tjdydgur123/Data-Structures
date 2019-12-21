#include <iostream>
using namespace std;

class Stack{
    private:
        int arr[5];
        int top; // index of the top element

    public:
        Stack();
        bool isEmpty();
        bool isFull();
        void push(int val);
        int pop();
        int count();
        int peek(int pos);
        void change(int pos, int val);
        void display();
};

int main(){
    Stack S;
    
    S.count();
    S.push(1);
    S.push(2);
    S.push(9);
    S.push(4);
    S.push(10);
    S.pop();
    S.display();

    if(S.isFull()){
        cout << "Is Full" << endl;
    }
    else{
        cout << "Is not full" << endl;
    }
    
    S.count();
    S.push(6);
    S.display();
    if(S.isFull()){
        cout << "Is Full" << endl;
    }
    else{
        cout << "Is not full" << endl;
    }

    if(S.isEmpty()){
        cout << "Is Empty" << endl;
    }
    else{
        cout << "Is not empty" << endl;
    }

    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();

    if(S.isEmpty()){
        cout << "Is Empty" << endl;
    }
    else{
        cout << "Is not empty" << endl;
    }

    S.count();
}