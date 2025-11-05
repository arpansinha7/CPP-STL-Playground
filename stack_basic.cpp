#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> stk;

    stk.push(5);     // insert the element on top of the stack
    stk.push(10);
    stk.push(15);
    stk.push(20);

    stk.emplace(25);    // Construct the element in-place and insert on top of the stack
    stk.emplace(30);
    stk.emplace(35);

    stk.pop();  // removes the top element from the stack
    stk.pop();

    stack <int> stk2;

    stk2.swap(stk); // swaps all the values of stk with stk2

    cout<<"Top Element of Stack :"<<stk2.top()<<endl;   //prints top element of stack
    cout<<"Size of stack :"<<stk2.size()<<endl; //prints the size of stack

    while(!stk2.empty()) //checks wether the stack is empty or not
    {
        cout<<stk2.top()<<" ";
        stk2.pop();
    }
    cout<<endl;
    return 0;
}

// Stack is a linear data structure which follow Last In, First Out (LIFO) Principle which means the element inserted at last will be removed first

/*
TIME & SPACE COMPLEXITY OF STACK FUNCTIONS
--------------------------------------------

1. push()
    -> Time: O(1)
    -> Space: O(1)

2. emplace()
    -> Time: O(1)
    -> Space: O(1)

3. pop()
    -> Time: O(1)
    -> Space: O(1)

4. top()
    -> Time: O(1)
    -> Space: O(1)
  
5. size()
    -> Time: O(1)
    -> Space: O(1)
   
6. empty()
    -> Time: O(1)
    -> Space: O(1)
    
7. swap()
    -> Time: O(1)
    -> Space: O(1)    

*/