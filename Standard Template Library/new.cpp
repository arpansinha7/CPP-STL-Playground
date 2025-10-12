#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;
int main()
{

//VECTOR
   /* vector<int>vec; //creates a vector and implemented as a dynamic array
    vec.push_back(500); //push element in the vector at last
    vec.push_back(1000);
    vec.push_back(1500);
    for(int i:vec) //traversal
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size :"<<vec.size()<<endl; //number of elements present now
    cout<<"Capacity :"<<vec.capacity()<<endl; //number of elements that can be inserted
    vec.pop_back(); //delete last element
    vec.emplace_back(6); //insert element at last
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Element at index 1 :"<<vec.at(1)<<endl; //element at index
    cout<<"Vector.Begin() :"<<*(vec.begin())<<endl; //points at first index
    cout<<"Vector.End() :"<<*(vec.end())<<endl; // points just aftet last index
    //vector<int>::iterator it;
    for(auto it=vec.begin();it!=vec.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //vector<int>::reverse_iterator i;
    for(auto i=vec.rbegin();i!=vec.rend();i++) //auto = vector<int>::reverse_iterator i
    {
        cout<<*(i)<<" ";
    }
    cout<<endl;

//LIST
    list <int> l; //creates a list and it is implemented as a doubly linked list
    l.push_back(1); 
    l.push_back(2);
    l.push_back(3);
    l.push_front(4); //insert an element at front
    l.push_front(5);
    l.pop_back();
    l.pop_front(); //deletes an element from front
    for(int i:l) //for-each loop
    {
        cout<<i<<" ";
    }
    cout<<endl;*/

    //list also contains the functions erase, size, clear, begin, end, rbegin, rend, insert, front, back
    //Random access is not possible in list because it is implemented as a doubly linked list

//DEQUE

   /* deque <int> d;

    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    d.emplace_back(20);
    d.pop_back();
    d.pop_front();
    d.push_front(25);
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;*/
    
    //Random access in Deque is possible because it is implemented as dynamic array

    
//PAIR

   /*pair <int, int> p = {3, 5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    
    pair <string, int> s={"Hello", 5};
    cout<<s.first<<endl;
    cout<<s.second<<endl;

    pair <int, pair <char, int>> t={1,{'a',5}};
    cout<<t.first<<endl;
    cout<<t.second.first<<endl;
    cout<<t.second.second<<endl;

    vector <pair<int, int>> vec={{1,2}, {3,4}, {5,6}};

    vec.push_back({7,8}); //here push_back function performs only insert operation and assumes that pair is already created and need to be inserted
    vec.emplace_back(9,10); //here emplace_back function will create in-place objects and make pair of the numbers and then insert

    for(auto p : vec)  //pair <int, int> can be replaced by 'auto' 
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    */

//STACK

   /*stack <int> s;
    s.push(1); //push element to the stack
    s.emplace(15); //same task as push
    s.push(2);
    s.push(3);
    s.push(6);
    s.push(10);
    s.pop(); //pop top element

    stack <int> s2;

    s2.swap(s); //swapped the value of s2 with s

    cout<<s2.top()<<endl;   //prints top element
    cout<<s2.size()<<endl; //prints stack size
    while(!s2.empty()) // empty() function checks if stack is empty or not
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;*/
    
//QUEUE

   /* queue <int> q;

    q.push(5); //insert element at last
    q.emplace(10);
    q.push(15);
    q.push(20);
    q.pop();  //deleted elemets from first
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" "; //prints the element on front
        q.pop();
    }
    cout<<endl;*/

//PRIORITY QUEUE
 
    /*priority_queue <int> pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    priority_queue <int, vector<int>, greater<int>> spq;
    spq.push(5);
    spq.push(3);
    spq.push(10);
    spq.push(4);

    while(!spq.empty())
    {
        cout<<spq.top()<<" ";
        spq.pop();
    }
    cout<<endl;*/

    //Priority Queue is implemented as Binary Tree

//MAP

    /*map <string, int> m;
    //map is implemented as self balancing tree
    m["tv"]=100;
    m["laptop"]=100;
    m["zebronics"]=500;
    m["headphones"]=50;
    m.insert({"camera",25});
    m.emplace("tablet", 59);

    m.erase("tv"); //erases tv from map
    for(auto p: m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"count ="<<m.count("laptop")<<endl; //prints number of key in the map
    cout<<"value ="<<m["laptop"]<<endl; //prints value of the given key
    //map automatically sort the data in lexicographic order
    //values can be same but key must be unique
    //form of insertion m[key]=value;
    if(m.find("camera")!=m.end()) //find function returns the iterator if they key is found otherwise it returns m.end()
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    cout<<"Size="<<m.size()<<endl; //returns the total number of keys in the map
    if(m.empty()) //checks if map is empty or not
    {
        cout<<"\nMap is empty\n";
    }
    else
    {
        cout<<"\nMap is not empty\n";
    }
    cout<<endl;*/

//MULTIMAP

    //everything is same as map but now in multimap we can insert duplicate keys
    //we can't use [] in this

    /*multimap <string, int> mm;

    mm.insert({"television",100});
    mm.emplace("tablet",500);
    mm.emplace("television",200);
    mm.emplace("television",1000);
    mm.erase(mm.find("television")); //erases only single instance
    mm.erase("television"); //erases all the instances in the multimap with same name as key

    
    for(auto p:mm)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;*/

//UNORDERED MAP

    /*unordered_map <string, int> um;

    //keys can't be duplicate in unordered map
    //unordered map dont return the data in lexicographic order as it return randomly

    um.emplace("tv",100);
    um.emplace("mobile",100);
    um.emplace("watch",500);
    um.emplace("fridge",300);

    um.erase("mobile");
    
    for(auto pp:um)
    {
        cout<<pp.first<<" "<<pp.second<<endl;
    }
    cout<<endl;*/

//SET

    set <int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(1); //set dont store duplicate value even the size dont increases
    cout<<s.size()<<endl;
    s.insert(2);
    s.insert(3);
    for(auto val: s)
    {
        cout<<val<<" ";
    }
    cout<<s.count(3)<<endl;

    cout<<"Lower bound :"<<*(s.lower_bound(4))<<endl; 
    //lower bound returns either the same value or just greater value otherwise s.end()
    cout<<"Upper Bound :"<<*(s.upper_bound(4))<<endl; 
    //upper bound return only greater value otherwise s.end()
    cout<<endl;
    //implemented as a self balancing tree
    return 0;
}