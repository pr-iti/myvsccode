
#include<iostream>
#include<string>
#include<math.h>
#include<stack>
using namespace std;

void TooLongWord(string s){

	int n = s.length();
	char c1 = s[0];
	char cn =s[n-1];
	string ans ="";

	if(n<10){
		cout<<s<<endl;
	}
	else{

		ans.push_back(c1);
		ans.push_back(n-2);
		ans.push_back(cn);
		cout<<ans;

	}
   return;
}

int main()
{
	string s;
    cout<<"enter the string"<<endl;
	cin>>s;
	TooLongWord(s);

	return 0;
}