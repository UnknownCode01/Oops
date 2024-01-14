#include<iostream>
using namespace std;
float calculate(float r){
	float temp=2*3.14*r;
	return temp;
}
float calculate(float a,float b){
	float temp=2*(a+b);
	return temp;
}
float calculate(float a,float b,float c){
	float temp=a+b+c;
	return temp;
}
void display(float temp){
	cout<<"Calculated Perimeter is "<<temp;
}
int main(){
	int n;
	float temp,a,b,c,r;
	cout<<"Select a shape to find perimeter\n1. Circle\t2. Rectangle\t3. Triangle\n";
	cin>>n;
	switch(n)
	{
		case 1:
		cout<<"Enter the radious ";
		cin>>r;
		temp=calculate(r);
		break;
		case 2:
		cout<<"Enter two sides ";
		cin>>a>>b;
		temp=calculate(a,b);
		break;
		case 3:
		cout<<"Enter three sides ";
		cin>>a>>b>>c;
		temp=calculate(a,b,c);
		break;
		default:
		cout<<"Invalid Input";
	}
	display(temp);
	return 0;
}
