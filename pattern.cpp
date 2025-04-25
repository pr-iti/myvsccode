
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include <math.h>
#include <vector>
#include<algorithm>
#include<set>
#include<map>
#include<list>
#include<array>
#include<stack>
#include<queue>
#include<array>

int main(){


  int row;
  cin>>row;
  for(int i=row-1;i>=0;i--){

    for(int j=row-1;j<=0;j--){
    if(j>row-i){
      cout<<" ";
    }
    else cout<<"*";
    }
    cout<<endl;
  }
    
  

  // for(int i=row-1;i>=0;i--){

  //   for(int j=row-1;j<=0;j--){
  //   if(j>row-i){
  //     cout<<"*";
  //   }
  //   else cout<<" ";
  //   }
  //   cout<<endl;
   
    
  // }
  // for(int i= 2*row;i>=0;i--){

  //   for(int j=2*row;j>=0;j--){
  //     if(j>row-i){
  //       cout<<"*";

  //     }
  //     else cout<<" ";
  //     if(j==4){
  //       continue;

  //     }
  //     if(i==4) continue;
  //   }
  //   cout<<endl;
  // }
  // for(int i=0;i<2*row;i++){

  //   for(int j=0;j<2*row;j++){
  //     if(j>row-i){
  //       cout<<"*";

  //     }
  //     else cout<<" ";
  //     if(j==4){
  //       continue;

  //     }
  //     if(i==4) continue;
  //   }
  //   cout<<endl;
  // }
  // for(int i=row-1;i>=0;i--){

  //   for(int j=row-1;j<=0;j--){
  //   if(j>row-i){
  //     cout<<"*";
  //   }
  //   else cout<<" ";
  //   }
  //   cout<<endl;
   
    
  // }
  
  return 0;
}


   