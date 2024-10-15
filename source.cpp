#include <iostream>
#include "Stack.h"

int main() {
    Stack S;
    int result;

    S.push(5);
    S.peek(result);
    std::cout << result << std::endl;
    S.pop();
    S.push(33);
    S.push(1);
    S.push(7);
    S.peek(result);
    std::cout << result << std::endl;
    S.push(33);
    S.push(12);
    S.display(std::cout);
    
    S.pop();
    S.display(std::cout);
    S.push(14);
    S.display(std::cout);
    S.pop();
    S.pop();
    S.display(std::cout);
    S.pop();
    S.pop();
    S.display(std::cout);
    S.peek(result);
    std::cout << result << std::endl;
    

    return 0;

}