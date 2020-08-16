#include<iostream>
using namespace std;

int &max(int &x,int &y);
int main(){

	int a,b;
	cout<<"Enter the 1st number:\n";
	cin>>a;
	cout<<"Enter the 2nd number:\n";
	cin>>b;
	max(a,b)=1000;
	cout<<"\nThe 1st number is: "<<a;
	cout<<"\nThe 2nd number is: "<<b;
	
	return 0;
}
int &max(int &x,int &y)
{
	if(x>y){
		return x;	
	}
	else{
		return y;	
	}
}
