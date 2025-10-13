#include <iostream>
#include <list>
using namespace std;

int main()
{
    // LIST BASICS
    list<int> l; // Creates a list (implemented as a doubly linked list)

    // Inserting elements
    l.push_back(1);  // Inserts element at the end
    l.push_back(2);
    l.push_back(3);
    l.push_front(4); // Inserts element at the front
    l.push_front(5);

    // Removing elements
    l.pop_back();    // Removes last element
    l.pop_front();   // Removes first element

    // Traversing using range-based for loop
    cout << "List elements: ";
    for (int i : l)
        cout << i << " ";
    cout << endl;

    // Other useful functions
    cout << "Size: " << l.size() << endl;   // Number of elements in the list
    cout << "Front: " << l.front() << endl; // Access first element
    cout << "Back: " << l.back() << endl;   // Access last element

    // Traversing using iterator
    cout << "Traversal using iterator: ";
    // 'auto' automatically deduces the correct iterator type
    for (auto it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Reverse traversal
    cout << "Reverse traversal: ";
    for (auto it = l.rbegin(); it != l.rend(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}

// List is implemented as a doubly linked list


/*
TIME & SPACE COMPLEXITY OF LIST FUNCTIONS
-----------------------------------------

1. push_back(), push_front()  
   -> Time: O(1)  
   -> Space: O(1)

2. pop_back(), pop_front()  
   -> Time: O(1)  
   -> Space: O(1)

3. insert(), erase()  
   -> Time: O(1) (if iterator is known)  
   -> Space: O(1)

4. size()  
   -> Time: O(1) 
   -> Space: O(1)

5. front(), back()  
   -> Time: O(1)  
   -> Space: O(1)

6. begin(), end(), rbegin(), rend()  
   -> Time: O(1)  
   -> Space: O(1)

Additional Notes:
- Random access (like l[i]) is **not supported** — access is sequential only.
- Iterators remain valid even after insertion or deletion (except for deleted elements).
*/
