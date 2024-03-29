// programmer: aliya feggins
//course 1720 sec 2
//description: making reverse list of linked list and stacks

#include <iostream>
#include "arrayStack.h"
  
using namespace std;
 
int main()
{
    stackType<int> stack1(50);
    stackType<int> stack2(50);

    stack1.initializeStack();
    stack1.push(23);
    stack1.push(45);
    stack1.push(58);
    stack1.push(3);
    stack1.push(29);
    stack1.push(82);

stack1.reverseStack(stack2);

    cout << "stack1: ";

    while (!stack1.isEmptyStack())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }

    cout << endl;


//stack1.reverseStack(stack2); 
cout<<"stack2:  ";
 while (!stack2.isEmptyStack())
   {

        cout << stack2.top() << " ";
        stack2.pop();
    }

    cout << endl;
    return 0;
}
