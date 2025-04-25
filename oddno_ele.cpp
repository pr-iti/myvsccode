#include <iostream>
#include <math.h>
using namespace std;

void occur_Check(int arr[]){
    int preans=0;
    int ans1=0;
    int ans2=0;

    for(int i=0; i< sizeof(arr); i++){
        preans^=arr[i];
    }
    int st= preans & ( ~(preans-1));
     for(int i=0; i< sizeof(arr); i++){
        if(st & arr[i]==0){
            ans1^=arr[i];
        }
        else{
            ans2^=arr[i];
        }
    }
 cout<<ans1 <<" "<<ans2;

}

int main(){

    int arr[8];
    int num;
    cout<<"enter elements";

    for(int i=0;i<8; i++){
        cin>>arr[i];
    }

    occur_Check(arr);

 return 0;
}