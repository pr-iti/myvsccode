#include<iostream>
#include<string>
#include<math.h>
#include<stack>
using namespace std;

void solve(){
	
    int t;
    //cin>>t;
    t=1;

    while(t--){


    	// int n,k;

    	// cin>>n>>k;
      // int i= n-k+1;
      // int ans=0;

      // for(int i=0;i<=n;i++){
      //    ans+=pow(i,i);
      // }

    	//  int sum=k*((2*n-k)+1)/2;

    	// if(ans &1){
    	// 	cout<<"no\n";
    	// }
    	// else{
    	// 	cout<<"yes\n";
    	// }


   //    int n,l;

   //    cin>>n>>l;
   //    int cnt=0;
   //    vector<string> st(n);

   // for(int i=0; i<n;i++){
        
   //      cin>>st[i]; 

   // }

   //  for(int i=0; i<n;i++){
        
   //      if(st[i].length()<=l){
   //          l=l-st[i].length();
   //          cnt++;
   //      }
   //      else{
   //       break;

   //      }
      
   // }
   // cout<<cnt<<endl;  

   int steps;

    cin>>steps;
   int cnt=0;
   while(steps != 0){

      if(steps%5 ==0 ){
      
         steps=steps/5;
         
        cnt++;
      }

      if(steps%4 ==0){
      
        steps=steps/4;
         
        cnt++;
      }

      if(steps%3 ==0){
        steps=steps/3;
         
        cnt++;
         
      }
      if(steps%2 ==0){
        steps=steps/2;
         
        cnt++;
      }
      
   

   }
   cout<<cnt<<endl;

   
   }
}

int main(){

     
    solve();
    return 0;
}

// void solve(int a, int b, int c){


//   int times;
    
//   int a,b,c;
//   int fcnt=0;

//   while(times--){

//     int arr[3];
//     for(int i=0; i<3; i++){
//       cin>>arr[i];
//     }
//     int cnt=0;

//   for(int i=0; i<3; i++){
//     if(arr[i]==1){
//         cnt++;
//     }
//   }
//   if(cnt>=2){
//     fcnt++;
    
//   }

    
//   }
//   cout<<fcnt<<endl;

// }


