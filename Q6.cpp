#include<iostream>
using namespace std;
void pointerSwap(int * , int *);
void referenceSwap(int & , int &);
int main(){
	int a , b;
	cout<<"Enter the values of a and b:"<<endl;
	cin>>a>>b;
	
	void pointerSwap(int *x , int *y){
	cout<<"\nUsing pointer:"<<endl;
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
	
	pointerSwap(&a,&b);
	cout<<" a = "<<a<<endl;
	cout<<" b = "<<b<<endl;
	
	void referenceSwap(int &x,int &y){
	cout<<"\nUsing reference variable:"<<endl;
	int temp;
	temp=x;
	x=y;
	y=temp;
}	
	
	referenceSwap(a,b);
	cout<<" a = "<<a<<endl;
	cout<<" b = "<<b<<endl;
	return 0;
	
}



