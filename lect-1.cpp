#include<iostream>
#include<math.h>
using namespace std;

int noSetbits(int n){
  int cnt=0;
  while(n>0){
    n&(n-1);
    cnt++;
  }

return cnt;
}

int main(){

  //  
  int num,res;
  cout<<"enter no";
    cin>>num;
  res=noSetbits(num);

  cout<<"no of set bits is "<<res;
  

  return 0;
}