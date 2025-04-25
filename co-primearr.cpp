#include<iostream>
#include<vector>

using namespace std;
bool IsPrime(int n){
    bool flag = 1 ;


    for(int  i= 2; i < n; i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
        else flag = 1;
    }
    return flag;
}

int main(){
    int cnt =0;
    vector<int> num;
    for(int i=0; i< num.size(); i++){
        cin>> num [i] ;
    }
     
    for(int i=0; i < num.size(); i++){

        if(IsPrime(num[i]) == 1){
            int  val1 = num[i];
            if(IsPrime(num[i+1]) == 1){
                cnt++;
            }
            else{
                  
            }
        }
    }


    return 0;
}
