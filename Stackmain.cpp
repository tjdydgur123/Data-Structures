#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    
    Stack S;

    S.count();

    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);

    S.pop();
    
    S.count();

    S.push(6);

    S.count();
    
    S.isEmpty();

    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();

    S.isEmpty();

}