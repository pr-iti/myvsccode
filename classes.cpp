#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

//class def.
class student{
    private:
     int age=18;


     public:
     string name=getname();
    void setname(string name){
      cout<<"your good name is:-"<<name<<endl;
    }
     

     string getname(){
        string fname;
        cout<<"enter your name"<<endl;
        cin>>fname;
        return fname;
     }
};

int main(){
    //object creation:-
    student s1;
   
    s1.setname(s1.getname());
  
    return 0;

}