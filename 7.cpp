#include<iostream>
#include<cmath>
using namespace std;
class A
{

	public:
		int a,b,c;
		float area;
	void get1(){
		cin>>a>>b>>c;
	}	
	void get2(){
		cin>>a>>b;
	}
	void get3(){
		cin>>a;
	}
	float calculate(float a,float b,float c){
		float s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		return area;
	}
	float calculate(float a,float b){
		area=(b/2)*(sqrt(a*a-(b*b/4)));
		return area;
	}
	float calculate(float a){
		area=(a*a)*sqrt(3)/4;
		return area;
	}
	void display(float temp){
		cout<<temp;
	}
};

int main(){
	A st,it,et;
	int n;
	float temp;
	cout<<"Select a Triangle to find area \n1. Scalene triangle\t2. Isosceles triangle\t3. Equilateral triangle\n";
	cin>>n;
	if(n==1){
		cout<<"Enter three sides ";
		st.get1();
		temp=st.calculate(st.a,st.b,st.c);
		cout<<"The Area is ";
		st.display(temp);
	}
	else if(n==2){
		cout<<"Enter the same like side first and then the different side ";
		it.get2();
		temp=it.calculate(it.a,it.b);
		cout<<"The Area is ";
		it.display(temp);
	}
	else if(n==3){
		cout<<"Enter any side ";
		et.get3();
		temp=et.calculate(et.a);
		cout<<"The Area is ";
		et.display(temp);
	}
	else{
	cout<<"Invalid Input.";
	return 0;
	}
	return 0;
}
