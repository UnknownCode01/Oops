#include<iostream>
using namespace std;


class s 
{
	int i;
	public :
	int  m,roll;
	char name[25];
	float count;
	void get(int su,int arr[15],int i){
		cout<<"For student "<<i+1<<endl;
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Roll No : ";
		cin>>roll;
		for(i=0;i<su;i++)
		{
		cout<<"Enter marks for subject no "<<i+1<<" : ";
		cin>>arr[i];
		}
	}
	void avg(int su,int arr[15]){
	    count=0;
		for(i=0;i<su;i++)
		count+=arr[i];
	}	
};
int main(){
	int n,su,ta=0,count1=0;
	s temp;
	cout<<"Enter number of students : ";
	cin>>n;
	s a[n];
	cout<<"Enter number of subjects : ";
	cin>>su;
	int arr[su];
	for(int i=0;i<n;i++)
	{
	a[i].get(su,arr,i);
	a[i].avg(su,arr);
	}
	cout<<"\nDisplaying Average number of each student\n";
	for(int i=0;i<n;i++)
	cout<<a[i].name<<" Roll no "<<a[i].roll<<" got "<<a[i].count/su<<endl;
	for(int i=0;i<n;i++)
	ta+=a[i].count;
	for(int i=0;i<n;i++){
	if(a[i].count>=(ta/n))
	count1++;
	}
	cout<<"Total average number is "<<ta/n;
	cout<<"\nNumber of student/students, got above average marks is/are "<<count1;
	cout<<"\nNumber of student/students, got below average marks is/are "<<n-count1;
	
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	{
		if(a[i].count<a[j].count){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
	cout<<"\nDisplaying Sorted student's name and roll no (according to the marks) ";
	for(int i=0;i<n;i++)
	cout<<a[i].name<<" "<<a[i].roll<<" ";
	cout<<endl;
	cout<<"The name of the student/students who secured highest marks is/are ";
	for(int i=0;i<n;i++)
	{
		if(a[i].count==a[0].count)
		cout<<a[i].name<<" ";
	}
	cout<<"\nThe Roll no. of the student/students who secured highest marks from bottom is/are ";
	for(int i=0;i<n;i++)
	{
		if(a[i].count==a[n-1].count)
		cout<<a[i].roll<<" ";
	}
	
	return 0;
}
