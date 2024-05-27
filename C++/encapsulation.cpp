//Encapsulation:-

#include<iostream>
using namespace std;
class youtubechannel{   

private:       
    string Name;
    string owner_name;
    int subscribers;   

public:
      youtubechannel(string name, string owner){    //Parameterized  Constructor created
        Name=name;
        owner_name=owner;
        subscribers=0;
      }   

      void getinfo(){
         cout<<"Name:  "<< Name<<endl<< "owner_name: "<<owner_name<<endl<<"subscribers: "<< subscribers<<endl<<endl;
      }     

      void subscribe(){
        subscribers++;
      }      

      void unsubscribe(){
        subscribers--;
      }    
};

int main(){
    youtubechannel ytchannel("prasun","prasun");
    ytchannel.subscribe();
    ytchannel.subscribe();
    ytchannel.subscribe();
    ytchannel.unsubscribe();
    
    // ytchannel.Name="prasun";
    // ytchannel.owner_name="prasun";
    // ytchannel.subscribers=1054326789;

    // cout<<"Name:  "<<ytchannel.Name<<endl<< "owner_name: "<<ytchannel.owner_name<<endl<<"subscribers: "<< ytchannel.subscribers<<endl<<endl;

//In these case we have to copy the previous code....but we can use constructor without copying the code..

ytchannel.getinfo();
   
   
//     youtubechannel ytchannel2("roy","roy");

//     // ytchannel2.Name="roy";
//     // ytchannel2.owner_name="roy";
//     // ytchannel2.subscribers=2003;

//     // cout<<"Name:  "<<ytchannel2.Name<<endl<< "owner_name: "<<ytchannel2.owner_name<<endl<<"subscribers: "<< ytchannel2.subscribers<<endl;

//  ytchannel2.GetInfo();
//         return 0;
}