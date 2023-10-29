// STL (Standard Template Library)
// It has some pre defined functions which we can directly use 
// It contains: Container, Iterators, Algorithms, Functors, Pair

// Container:
//     1) Sequential: 1. vectors, 2. stack, 3. queue etc 
//     2) Ordered: 1. map, 2. multi map, 3. set, 4. multi set 
//     3) Unordered: 1. Underordered map, 2. Unordered set 

// Algorithms:
//     1) reverse
//     2) find 
//     3) count 4) upper bound 5) lower bound 6)max_element 7)min_element

// Pair: It is a template class
//     It is also the part of STL 

// Iterator: begin() --> a[0]
//           end() --> a[n]
          
// Functors: Class used as a function 


// Pair: 
//     syntax: pair<data_type, data_type> p;
//     eg: pair<int, int> p1;
//     pair<int, float> p2;

//     Insertion in Pair:
//         pair<int, float> p;
//         p = make_pair(5,75) or p = {5, 7.5};
//         cout << "First value: " << p.first << endl;
//         cout << "Second value: " << p.second << endl; 
//         cin >> p.first;
//         cin >> p.second;
// *********************************************************
//         pair <int, float> p;
//         p = make_pair(5, 7.5);

//         create a copy of pair 
//         pair<int, float> p1 = p;

//         cout << "P values: " << p.first << p.second << endl;
//         cout << "P1 values: " <<p1.first << p1.second << endl;

// pair<int,int>p;
// p=make_pair(5,6);
// pair<int,int>p1=p; // creates a copy of pair
// pair<int,int>&p2=p1; // p refer to p2 or point to p2
// p2=



// #include<iostream>
// using namespace std;
// int main{
//     pair<int,int> p[3];
//     for(int i=0;i<3;i++)
//     {
//         cin>>p[i].first;
//         cin>>p[i].second;
//     }
//     for(i=0;i<3;i++)
//     {
//         cout<<p[i].first<<p[i].second;
//     }
//     return 0;
// }

