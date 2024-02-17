//programmer:ALiya feggins
//course ccsc 1720 secton 2
//descpription: reversing stack and linked list
//comme : theres no compile error but it doesnt output anything and wont let me type nything after and im going to be at a conference presenting my capstone till thurssday and i dont want this to be late but the array stack one works.n
#include <iostream>
#include "linkedStack.h"

using namespace std;
 
int main()
{
    linkedStackType<int> stack1;
    linkedStackType<int> stack2;

    stack1.initializeStack();
    stack1.push(23);
    stack1.push(45);
    stack1.push(38);
    stack1.push(3);
    stack1.push(29);
    stack1.push(82);

stack1.reverseLinkedStack(stack2);

    cout << "stack1: ";

    while (!stack1.isEmptyStack())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }

    cout << endl;
cout<<"stack 2:  ";
//stack1.reverseLinkedStack(stack2);
while (!stack2.isEmptyStack())
    {
        cout << stack2.top() << " ";
        stack2.pop();
    }
   
 return 0;
}
