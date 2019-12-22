#include "queue.h"
#include <iostream>

using namespace std;

int main(){

    Queue Q;
    
    Q.count();

    Q.enqueue(5);
    Q.enqueue(6);
    Q.enqueue(7);
    Q.enqueue(8);
    Q.enqueue(9);

    Q.dequeue();
    
    Q.count();

    Q.enqueue(10);

    Q.count();
    
    Q.isEmpty();

    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();

    Q.isEmpty();

}


