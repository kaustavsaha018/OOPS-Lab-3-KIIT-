#include<iostream>
using namespace std;

int &max(int &x,int &y);
int main()
{

	int a,b,c,d;
	cout<<"Enter the 1st number:\n";
	cin>>a;
	cout<<"Enter the 2nd number:\n";
	cin>>b;
	cout<<"Enter the 3rd number:\n";
	cin>>c;
	cout<<"Enter the 4th number:\n";
	cin>>d;
	cout<<"The maximum number is:"<<max(a,max(b,max(c,d)));
	
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
