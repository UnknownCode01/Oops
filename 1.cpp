#include <iostream>
using namespace std;
class Employee{
	char name[30],dept[40];
	int employee_No,salary;
	public :
	void get(){
		cout<<" Employee No : ";
		cin>>employee_No;
		cout<<" Name : ";
		cin>>name;
		cout<<" Department : ";
		cin>>dept;
		cout<<" Salary : ";
		cin>>salary;
	}
	void display(){
		cout<<"\nFor Employee No "<<employee_No<<" Name is "<<name<<" from "<<dept<<" Department ";
	}
	inline int s(){
		return salary;
	}
};

int main(){
	Employee a1,a2,a3;
	int t;
	cout<<"Enter Details "<<endl;
	a1.get();
	a2.get();	
	a3.get();
	
	cout<<"\n\nDisplaying Informations\n\n";
	a1.display();
	cout<<"getting ";
	t=a1.s();
	cout<<t<<" Rs.";
	a2.display();
	cout<<"getting ";
	t=a2.s();
	cout<<t<<" Rs.";
	a3.display();
	cout<<"getting ";
	t=a3.s();
	cout<<t<<" Rs.";
	
return 0;
}
