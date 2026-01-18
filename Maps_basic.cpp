#include <iostream>
#include <map>    //Header file for using Map STL
using namespace std;
int main()
{
    //MAP BASICS
    map <int, int> mp;  // Creates an Ordered Map (Implemented using Red-Black Trees)

    //Inserting Elements

    mp[5] = 6;    //Inserts key 5 with value 6
    mp[9] = 10;
    mp[25] = 94;
    mp.insert({2, 5}); //Inserts key value pair
    mp.emplace(5, 7); //Will not overwrite existing key
    mp[42] = 45;

    //Traversing map (keys are sorted automatically)
    cout<<"Map Elements (sorted by keys) :";
    // val.first -> key | val.second -> value;
    for(auto val : mp)            
    {
        cout<<"("<<val.first<<", "<<val.second<<") ";
        cout<<endl;
    }

    //Size and check

    cout<<"Size of map : "<<mp.size()<<endl;
    cout<<"Is Map empty ? "<<mp.empty()<<endl;\

    //Searching Elements
    if(mp.find(9) != mp.end())
        cout<< "Key 9 is present in the map" <<endl;

    //Lower and Upper Bound

    auto lb = mp.lower_bound(9);  // First key >= 9
    auto ub = mp.upper_bound(9);  // First key > 9

    if(lb != mp.end())
        cout <<"Lower Bound of 9 :"<<lb->first<<endl;
    
    if(ub != mp.end())
        cout<<"Upper Bound of 9 :"<<ub->first<<endl;

    return 0;
}

/*
TIME & SPACE COMPLEXITY OF MAP FUNCTIONS
---------------------------------------

1. insert(), emplace()
   -> Time: O(log n)
   -> Space: O(1)

2. operator[] (mp[key])
   -> Time: O(log n)
   -> Space: O(1)
   -> Note: Inserts key if not present

3. find(), count()
   -> Time: O(log n)
   -> Space: O(1)

4. erase()
   -> Time: O(log n)
   -> Space: O(1)

5. size(), empty()
   -> Time: O(1)
   -> Space: O(1)

6. lower_bound(), upper_bound()
   -> Time: O(log n)
   -> Space: O(1)

Additional Notes:
- Keys are unique and sorted automatically
- Keys cannot be modified once inserted
- Traversal always happens in ascending order of keys
*/
