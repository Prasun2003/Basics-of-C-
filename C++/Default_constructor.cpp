// Constructor:- Constructor are special class members which are called by the compiler every time an object of that class is instantiated. Constructors have the same name as the class and may be defined inside or outside the class definition. 

//Default Constructor:-
#include<iostream>
using namespace std;
class youtubechannel{              
    public:              //by default it is private 
    string Name;
    string owner_name;
    int subscribers;    

      youtubechannel(){    //Default Constructor created
      Name="prasun";
      owner_name="prasun";
      subscribers=280;
      }               
};

int main(){
    youtubechannel ytchannel;
    // ytchannel.Name="prasun";
    // ytchannel.owner_name="prasun";
    // ytchannel.subscribers=1054326789;

    cout<<"Name:  "<<ytchannel.Name<<endl<< "owner_name: "<<ytchannel.owner_name<<endl<<"subscribers: "<< ytchannel.subscribers<<endl<<endl;

//In these case we have to copy the previous code....but we can use constructor without copying the code..
   
   
    // youtubechannel ytchannel2;

    // // ytchannel2.Name="roy";
    // // ytchannel2.owner_name="roy";
    // // ytchannel2.subscribers=2003;

    // cout<<"Name:  "<<ytchannel2.Name<<endl<< "owner_name: "<<ytchannel2.owner_name<<endl<<"subscribers: "<< ytchannel2.subscribers<<endl;
    //     return 0;
}