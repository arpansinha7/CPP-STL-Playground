#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // VECTOR BASICS
    vector<int> vec; // Creates a vector (implemented as a dynamic array)

    // Inserting elements
    vec.push_back(500);   // Inserts element at the end
    vec.push_back(1000);
    vec.push_back(1500);
   //HELLO
    // Traversing using range-based for loop
    cout << "Initial vector elements: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // Size and Capacity
    cout << "Size: " << vec.size() << endl;         // Number of elements present
    cout << "Capacity: " << vec.capacity() << endl; // Total allocated space

    // Removing and adding elements
    vec.pop_back();       // Deletes last element
    vec.emplace_back(6);  // Constructs and adds element at end (faster than push_back)

    cout << "After pop_back() and emplace_back(): ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // Accessing specific elements
    cout << "Element at index 1: " << vec.at(1) << endl;
    cout << "Vector.begin(): " << *(vec.begin()) << endl;      // Points to first element
    cout << "Vector.end(): " << *(vec.end() - 1) << endl;      // Points to last valid element

    // Traversing using iterator
    cout << "Traversal using iterator: ";
    // 'auto' automatically deduces the type of variable (here: vector<int>::iterator)
    for (auto it = vec.begin(); it != vec.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Traversing using reverse iterator
    cout << "Traversal using reverse iterator: ";
    // 'auto' deduces this as vector<int>::reverse_iterator
    for (auto i = vec.rbegin(); i != vec.rend(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}

// Vector is implemented as dynamic array


/* 
TIME & SPACE COMPLEXITY OF VECTOR FUNCTIONS
-------------------------------------------

1. push_back()      
   -> Time: O(1) amortized (O(n) when reallocation happens)
   -> Space: O(1) (may trigger reallocation requiring O(n) new space)

2. pop_back()       
   -> Time: O(1)
   -> Space: O(1)

3. emplace_back()   
   -> Time: O(1) amortized (O(n) on reallocation)
   -> Space: O(1) (same as push_back)

4. size()           
   -> Time: O(1)
   -> Space: O(1)

5. capacity()       
   -> Time: O(1)
   -> Space: O(1)

6. at(index)        
   -> Time: O(1)
   -> Space: O(1)

7. begin(), end()   
   -> Time: O(1)
   -> Space: O(1)

8. rbegin(), rend() 
   -> Time: O(1)
   -> Space: O(1)

Additional Notes:
- Reallocation occurs when vector capacity is exceeded; the capacity usually doubles.
- Iterators and references become invalid after reallocation.
*/
