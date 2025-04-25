#include<iostream>
using namespace std;
void solve(){

    int t;
   
    cin>>t;
    while(t--){

        int n,cnt=0;
         cin>>n;

        for(int i=2; i<= n; i++){
      
            for(int j=1; j<= n; j++){
               if(i+j == n){
                cnt++;
            }
        }
        cout<<cnt<<endl;
      }
    
    }
    
}

int main(){
     
    solve();
    return 0;
}