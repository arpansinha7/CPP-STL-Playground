#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // DEQUE BASICS
    deque<int> d; // Creates a deque (Double Ended Queue)
    // Implemented as a dynamic array allowing insertion/removal from both ends

    // Inserting elements
    d.push_back(5);    // Inserts element at the end
    d.push_back(10);
    d.push_back(15);
    d.emplace_back(20); // Constructs and adds element at the end (faster than push_back)
    d.push_front(25);   // Inserts element at the beginning

    // Removing elements
    d.pop_back();   // Removes last element
    d.pop_front();  // Removes first element

    // Traversing using range-based for loop
    cout << "Elements in deque: ";
    for (int i : d)
        cout << i << " ";
    cout << endl;

    // Accessing specific elements
    cout << "Element at index 1: " << d.at(1) << endl; // Access element by index
    cout << "Front element: " << d.front() << endl;     // Returns first element
    cout << "Back element: " << d.back() << endl;       // Returns last element

    // Traversal using iterators
    cout << "Traversal using iterator: ";
    for (auto it = d.begin(); it != d.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Traversal using reverse iterators
    cout << "Traversal using reverse iterator: ";
    for (auto rit = d.rbegin(); rit != d.rend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    // Deque properties
    cout << "Size: " << d.size() << endl;         // Number of elements present
    cout << "Max Size: " << d.max_size() << endl; // Maximum elements deque can hold (system dependent)
    cout << "Empty: " << (d.empty() ? "Yes" : "No") << endl; // Checks if deque is empty

    return 0;
}

// Deque (Double Ended Queue) allows insertion and deletion from both front and back.
// Random access is possible because it is implemented as a dynamic array internally.

/*
TIME & SPACE COMPLEXITY OF DEQUE FUNCTIONS
-------------------------------------------

1. push_back(), push_front()
   -> Time: O(1) amortized (may vary if reallocation happens)
   -> Space: O(1)

2. pop_back(), pop_front()
   -> Time: O(1)
   -> Space: O(1)

3. emplace_back(), emplace_front()
   -> Time: O(1) amortized
   -> Space: O(1)

4. at(index), front(), back()
   -> Time: O(1)
   -> Space: O(1)

5. begin(), end(), rbegin(), rend()
   -> Time: O(1)
   -> Space: O(1)

6. size(), empty(), max_size()
   -> Time: O(1)
   -> Space: O(1)

Additional Notes:
- Supports random access unlike list.
- Insertions/removals at both ends are efficient (O(1)).
- Insertions/removals in the middle are O(n).
*/
