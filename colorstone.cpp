#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string t;
    cin>> s >> t;

     int ans=0 , k= 1;

    for(int i =0; i< t.size(); i++){

        if(s[ans] == t[i]){
            ans++;
            k++;
        }

    }
    
    cout<< k << endl;

    return 0;
}