#include <iostream>
#include <vector> //Includes vector in the program
using namespace std;
int main()
{
    //Declaring a vector
    vector <int> vec;     // Syntax : vector <data_type> variable_name;
    int data;
    
    //Inserting Elements
    vec.push_back(5);     //  .push_back() inserts the value at the end of vector

    cout << "Enter data to insert :";
    cin >> data;

    vec.push_back(data);                //Insertion using user input

    //Displaying Vector Informations
    cout << vec.size() << endl;                 // returns the number of element present
    cout << vec.capacity() << endl;             //returns the current capacity of the vector


    vec.emplace_back(25);     //Constructs and adds an element at the end(faster than push_back())

    vec.pop_back();           //Removes the last Element


    return 0;
}