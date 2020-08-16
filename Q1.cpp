#include<iostream>
using namespace std;
void pointerSwap(int * , int *);
void referenceSwap(int &,int &);
int main(){
	int a , b;
	cout<<"Enter the values of a and b:"<<endl;
	cin>>a>>b;
	pointerSwap(&a,&b);
	cout<<" a = "<<a<<endl;
	cout<<" b = "<<b<<endl;
	
	int c , d;
	cout<<"\nEnter the values of c and d:"<<endl;
	cin>>c>>d;
	referenceSwap(c,d);
	cout<<" c = "<<c<<endl;
	cout<<" d = "<<d<<endl;
	return 0;
	
}

void pointerSwap(int *x , int *y){
	cout<<"\nUsing pointer:"<<endl;
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void referenceSwap(int &x,int &y){
	cout<<"\nUsing reference variable:"<<endl;
	int temp;
	temp=x;
	x=y;
	y=temp;
}
