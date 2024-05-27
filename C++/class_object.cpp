// OOPs:-
// Oop is a programming language which uses object in programming. Oops aims to implement the real world entities like inheritance, hiding, polymorphism in programming. Oop main aim is binding together the data and the functions that operates on them so that no other part of code can access this data except that function.

//Characteristics of OOPs:-

//1.Class:- class is a user defined datatype. It consists of all data members and members functions, which can be accessed and used by creating an instance of that class. A class is a blueprint of an object.

//2.Object:- It is the basic unit of oop and represents the real life entities. An object is instance of a class. An object has an identity, state, and behaviour.

//Note:-
// When a class is defined no memory is allocated but when an object is created memory is allocated. 

//3.Data Abstraction:- Data abstraction is one of the most essential and important features of oops. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details.

//4.Encapsulation:- Encapsulation is defined as the wrapping up of data under a single unit. It is the machanism that binds together code and the data it manipulates. 

//5.Inheritance:- Inheritance is an important pillar of oop. The capability of a class to derive properties and characteristics from another class is called inheritance.

//6.Polymorphism:- The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.

//7.Dynamic Binding:- In dynamic binding, the code to be executed in response to the function call is decided at runtime. Dynamic Binding means that the code associated with a given procedure call is not known until the time of at run time.


#include<iostream>
using namespace std;
class youtubechannel{              
    public:              //by default it is private 
    string Name;
    string owner_name;
    int subscribers;                     
};

int main(){
    youtubechannel ytchannel;
    ytchannel.Name="prasun";
    ytchannel.owner_name="prasun";
    ytchannel.subscribers=1054326789;

    cout<<"Name:  "<<ytchannel.Name<<endl<< "owner_name: "<<ytchannel.owner_name<<endl<<"subscribers: "<< ytchannel.subscribers<<endl;
        return 0;
}