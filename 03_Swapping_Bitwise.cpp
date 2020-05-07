#include<iostream>
using namespace std;
int main(){

#ifndef CP_SETUP
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

//start from here
	int a,b;
	cin>>a>>b;

	cout<<"Values from Swapping: "<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout<<"Values After Swapping: "<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	


}