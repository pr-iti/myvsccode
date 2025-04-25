#include <iostream>
#include <vector>
#include<math.h>
#include <list>
using namespace std;

 vector <list<int>> powerSet(vector <int> &nums, int k){

    vector <list<int>> ans;

    for(int i=0 ; i<((1<<k)-1); i++){

        list <int> ls;
        for(int j=0; j<k ;j++){
            if(nums[i] & (1<<i)){
                ls.push_back(nums[i]);
            }
        }

      ans.push_back(ls);
    }
    for(int i=0 ; i< ((1<< k)-1); i++){

        cout<<ans[i]<<" ";
    }
    return ans;
}



int main(){
  
  int n;
  vector <vector<int>> ans1;
  vector <int> nums;
  cout<<" enter no of ele"<< endl;
  cin>>n;

  cout<<" enter elements";
  for(int i=0; i< n; i++ ){
    cin>>nums[i];
  }

 cout<<"the power set is:" <<" ";
   powerSet(nums,n);
  

    return 0;
}