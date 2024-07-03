#include<bits/stdc++.h>
using namespace std;
//function 
int sum(int a,int b){
    return a+b;
}
int main(){
    cout<<"Hello Prasun"<<endl;
    int s=sum(5,10);
    cout<<s;
}

//STL in C++
/*
Algorithms
containers
functions 
Iterators
*/

//----------------------------------------------------------
//Pairs:-
#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>>p={1,{2,3}};
    cout<<p.first<<" "<<p.second.secod<<" "<< p.second.first;
}
int main(){ 
    explainPair();
}
//-----------------------------------------------------
//Vectors:-
void explainVector(){
    vector<int>v; //create empty container
    v.push_back(1);
    v.emplace_back(2); //its dynamically increases its size
    vector<int>v(5,100);  //{100,100,100,100,100}
    vector<int>v2(v); //copy of v is stored in v2
}
//-------------------------------------------------------
//Iterations:-
void explainIterators(){
    vector<int>::iterator it= v.begin();
    it++;
    cout<<*(it);

    vector<int>::iterator it= v.end();
    it--;
    cout<<*(it);

    cout<< v[0]<<" "<<v.at[0]; //for print single elements in a vector

    //for whole vector
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    //delection/erase in vector
    v.erase(v.begin()); //erase first element

    //insertion in vector
    v.insert(v.begin(),100); //insert 100 at first position
    v.insert(v.begin()+1,2,100);//{100,100,100,50,60,70}

    v.pop_back();
    v.swap(v2);
    v.clear();
} 
// lists in vector
void explainLists(){
    list<int> ls;
    ls.push_back(1);
    ls.push_front(2); // It is cheap because of time complexity it takes
}

//stack:- LIFO(last in first out)
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop(); //pop last element
    cout<<st.top();
    cout<<st.empty();
    cout<<st.size();

stack<int> st,st2;
st.swap(st2);
}
 // Queue:- FIFO(first in first out)
 void explainQueue(){
    queue<int>q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.pop(); //pop first element
     q.back()+5;
     cout<< q.back();
     cout<<q.front();
    
 }

 //Priority Queue:-Largest element stay at the top
 //maximum heap- means maximum elements at the top
 void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.pop(); //pop first element
    cout<< pq.top();
    //Minimum heap- means minimum element at the top
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(3);
    pq2.pop(); //pop first element
    cout<< pq2.top();
 }
 //----------------------------------------------------------
 //set continer:-
 //set is a container that stores sorted & unique elements by default.
 void explainSet(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2); //duplicate element will not be inserted
    s.erase(2); //erase element

    s.find(2); //find element
    auto it= s.find(3);

    auto it = s.count(2); //count element

    s.empty();
    s.size();
    s.begin(); //first element
    s.end(); //last element
//for more detail stiver youtube video
 }
// Multiset- It stores in sorted order not unique as set
void explainMultiset(){
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2); //duplicate element will be inserted
    s.erase(2); //erase element
    s.find(2); //find element
    auto it= s.find(3);
}

//Unordered set- It is unique but not stored in sorted order
//everything same as the set container 

//--------------------------------------------------------

//Map container for ex in class roll no are keys and keys are unique
//map stores unique keys also in sorted order same like set container
void explianMap(){
    map <int.int> map;
    map<int,pair<int,int>> map;

    map.emplace({3,1});
    map.insert({2,4});
 for (auto it: map)
 cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
}

//---------------------------------------------------------
//multimapping container:- duplicate keys and sorted order also
//all codes same as the map container  


//----------------------------------------------------------------------------
//Algorithms in stl c++

//for sorting algorithm
sort(a,a+n);
sort(a+2,a+4);

sort(a,a+n, greater<int>); // for sorting in decending order