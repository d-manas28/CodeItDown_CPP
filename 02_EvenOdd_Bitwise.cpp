#include<iostream>
using namespace std;
int main(){

#ifndef CP_SETUP
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	//Start from here
	int n;
	cin>>n;

	int ans = (n&1);
	if(ans == 1){
		cout<<"Odd Number"<<endl;
	}	
	else{
		cout<<"Even Number"<<endl;
	}
	return 0;
}