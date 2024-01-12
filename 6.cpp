#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{

	int q[10],t[10],f=0;
	char code[10];
	char name[10][15]={"Bottle","Scale","Rope","Charger","Mouse","Pen","Dish","Pin","Lock","Shirt"};
	int p[10]={400,40,50,300,800,36,300,100,35,20};
	cout<<"SL NO\t"<<"CODE\t"<<"NAME\t\t"<<"PRICE"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<i+1<<"\t"<<"N"<<i<<"j"<<i+5<<(char)(65+i)<<"g"<<"\t"<<name[i]<<"\t\t"<<p[i]<<endl;
	}
	cout<<"\n________________________________________\n\nEnter the quantity of \n\n";
	for(int i=0;i<10;i++){
	cout<<"Product of sl no "<<i+1<<" ";
	cin>>q[i];
	t[i]=q[i]*p[i];
	f=f+t[i];
	}
	cout<<"\n\nDisplaying Final Bill\n\n";
	cout<<"SL NO\t"<<"CODE\t"<<"NAME\t\t"<<"PRICE\t"<<"Quantity\t"<<"Total"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<i+1<<"\t"<<"N"<<i<<"j"<<i+5<<(char)(65+i)<<"g"<<"\t"<<name[i]<<"\t\t"<<p[i]<<"\t"<<q[i]<<"\t\t"<<t[i]<<endl;
	}
	
	cout<<"_______________________________________________________________\n\t\t\tTotal = "<<f;
	return 0;
}
