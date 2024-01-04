#include <iostream>
using namespace std;

class cal
{
	int arr[100];
	public : 
	void get(int n){
	cin>>arr[n];
	}
	void add(cal f1,cal f2,int n){
	do{
	arr[n]=f1.arr[n]+f2.arr[n];
	}while(n--);
	}
	void multiplication(int n,cal f1,cal f2){
		int k=2*n+1;
		for(int i=0;i<k;i++)
		arr[i]=0;
		for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++){
			arr[i+j]+=f1.arr[i]*f2.arr[j];
		}
	}
	void display1(int n){
	do{	
	if(n!=0)
	cout<<arr[n]<<" x^"<<n<<" + ";
	else
	cout<<arr[n];
	}while(n--);
	}
	void display2(int n)
	{
		for (int i=n-1; i>=0; i--)
    	{
      	if(i!=0){
      		if(arr[i]!=0)
			cout<<arr[i]<<" x^"<<i<<" + ";
		}
		else
		cout<<arr[i];
    	}
	}
};
int main()
{
	cal f1,f2,f3;
	int n;
	cout<<"Amongst both polynomial equations\nEnter the max Exponent ";
	cin>>n;
	int m=n;
	cout<<"For the first polynomial\n";
	do{
		cout<<"Enter coefficient of x^"<<n<<" ";
		f1.get(n);
	}while(n--);
	n=m;	
		cout<<"For the second polynomial\n";
	do{
		cout<<"Enter coefficient of x^"<<n<<" ";
		f2.get(n);
	}while(n--);
	n=m;
	f3.add(f1,f2,n);
	cout<<"The addition value is \n";
	f3.display1(n);
	f3.multiplication(n,f1,f2);
	cout<<"\nThe multiplication value is \n";
	f3.display2(2*n+1);
	return 0;
}
