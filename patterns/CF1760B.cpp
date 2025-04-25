#include<iostream>
#include<string>

using namespace std;
void solve( string s, int n,int t){
    int ans=1;
    while(t--){
        for(int i =0; i< n; i++){
      
            int ch= s[i] -'a';
             if(ans<=ch){
              ans=ch;
             }
            
      }
       cout<<ans<<endl;
    }
   

}
int main()
{
    int n,t;
    cin>>t;
    cin>>n;
    string s;
    cin>>s;
     solve(s,n,t);
   

    return 0;
}
