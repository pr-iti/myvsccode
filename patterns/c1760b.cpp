#include<iostream>
#include<vector>
#include <climits>

using namespace std;
//premax
void solve(){
    int t;
    
    cin>>t;
  

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
            if(abs(b-a)%2==0){
                cout<<"yes"<<endl;
            }
            else{

                cout<<"no"<<endl;
            }
    }
    
  return;
}
int main()
{

    solve();
    return 0;
}