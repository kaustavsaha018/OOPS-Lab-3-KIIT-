#include <iostream>
using namespace std;
void find_area_perimeter( float&,float&, float,float);
int main(){
	
	float h,b;
	cout<<"Enter the Height of the rectangle: ";
	cin>>h;
	cout<<"Enter the Width of the rectangle: ";
	cin>>b;
	float peri, area;
	find_area_perimeter(area,peri,h,b);
	cout<<"The area of the rectangle is: "<<area<<endl;
	cout<<"The perimeter of the rectangle is: "<<peri<<endl;
	return 0;
}
void find_area_perimeter( float &area,float &perimeter, float x, float y){
	area = x*y;
	perimeter = 2*(x+y);
}

