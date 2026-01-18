#include <iostream>
#include <unordered_map>    //Header file for using Unordered Map STL
using namespace std;
int main()
{
    // UNORDERED MAP BASICS
    unordered_map <int, int> mp;  // Creates an Unordered Map (Implemented using Hash-Table)

    //Inserting Elements

    mp[5] = 6;    //Inserts key 5 with value 6
    mp[9] = 10;
    mp[25] = 94;
    mp.insert({2, 5}); //Inserts key value pair
    mp.emplace(5, 7); //Will not overwrite existing key
    mp[42] = 45;

    //Traversing Unordered-map (No specific Order)
    cout<<"Unordered Map Elements :";
    // val.first -> key | val.second -> value;
    for(auto val : mp)            
    {
        cout<<"("<<val.first<<", "<<val.second<<") ";
        cout<<endl;
    }

    //Size and check

    cout<<"Size of unordered_map : "<<mp.size()<<endl;
    cout<<"Is unordered_map empty ? "<<mp.empty()<<endl;

    //Searching Elements
    if(mp.find(9) != mp.end())
        cout<< "Key 9 is present in the map" <<endl;

    //Erasing Elements
    mp.erase(25);

    cout<<"After erasing key 25 :";

    for(auto val : mp)
    {
        cout<<"("<<val.first<<", "<<val.second<<") ";
        cout<<endl;
    }
    return 0;
}

/*
TIME & SPACE COMPLEXITY OF UNORDERED_MAP FUNCTIONS
------------------------------------------------

1. insert(), emplace()
   -> Time: O(1) average | O(n) worst case
   -> Space: O(1)

2. operator[] (mp[key])
   -> Time: O(1) average | O(n) worst case
   -> Space: O(1)
   -> Note: Inserts key if not present

3. find(), count()
   -> Time: O(1) average | O(n) worst case
   -> Space: O(1)

4. erase()
   -> Time: O(1) average | O(n) worst case
   -> Space: O(1)

5. size(), empty()
   -> Time: O(1)
   -> Space: O(1)

Additional Notes:
- Keys are unique
- Elements are NOT stored in sorted order
- Performance depends on hash function and load factor
- Worst case occurs when many keys hash to the same bucket
*/
