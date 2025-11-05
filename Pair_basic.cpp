#include <iostream>
using namespace std;

int main()
{
    pair <int, int> pr = {3, 5};

    cout<<"First Integer :"<<pr.first<<endl;
    cout<<"Second Integer :"<<pr.second<<endl;

    pair <string, int> sr = {"String", 10};

    cout<<"First String :"<<sr.first<<endl;
    cout<<"Second Integer :"<<sr.second<<endl;

    pair <int, pair <char, int>> p = {15, {'A', 25}};

    cout<<"First Integer :"<<p.first<<endl;

    cout<<"First part of pair :"<<p.second.first<<endl;
    cout<<"Second Part of Pair :"<<p.second.second<<endl;

    vector <pair<int, int>> vec={{1,2}, {3,4}, {5,6}};

    vec.push_back({7,8}); //here push_back function performs only insert operation and assumes that pair is already created and need to be inserted
    vec.emplace_back(9,10); //here emplace_back function will create in-place objects and make pair of the numbers and then insert

    for(auto p : vec)  //pair <int, int> can be replaced by 'auto' 
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    return 0;
}

// A pair in C++ STL is a container that holds two values potentially of different data types, defined as pair <T1, T2>. It provides a simple way to group two objects together

/*
TIME & SPACE COMPLEXITY OF PAIR FUNCTIONS
-------------------------------------------


1. Constructor (pair <T1, T2>())
    -> Time : O(1)
    -> Space : O(1)

2. push_back() / emplace_back()
    -> Time : O(1)
    -> Space : O(1)

3. Iterating over vector <pair<int, int>>
    -> Time : O(n) (n is the size of array)
    -> Space : O(1)
*/