#include <iostream>
using namespace std;

class student
{
	int Roll_no, marks[10]={0}, Total_marks,count=0;	
	char Name[30];
	public :
		void get(int n){
		    cout<<"\nEnter Roll Number : ";
		    cin>>Roll_no;
			cout<<"Enter Name : ";
			cin>>Name;
			cout<<"Enter marks for\n";
			for(int i=0;i<n;i++)
			{
			cout<<"Subject no "<<i+1<<" : ";
			cin>>marks[i];
			if(marks[i]<60)
			count=1;
			}	
		}
		void calculate(int n)
		{
			int  add=0,t=0,avg=0;
			for(int i=0;i<n;i++){
				add = add + marks[i];
				t=t+100;
			}
			avg=add/n;
			cout<<"\nFor Roll Number "<<Roll_no<<"\nName is "<<Name<<" , Total marks gained is "<<add<<" out of "<<t;
			if(count==1)
			cout<<"\nStudent might have failed in one or morethan one subjects.\nHe will must have to attend the failed subjects' exam again\n";
			else{
			if(avg>=90)
			cout<<"\nGrade is O\n";
			else if(avg>=80)
			cout<<"\nGrade is A\n";
			else if(avg>=70)
			cout<<"\nGrade is B\n";
			else
			cout<<"\nStudent Failed\n";
		}
		}
};

int main(){
	int n;
	student s1,s2,s3;
	cout<<"Enter total subject number : ";
	cin>>n;
	s1.get(n);
	s2.get(n);
	s3.get(n);
	cout<<"\nDisplaying Information\n";
	s1.calculate(n);
	s2.calculate(n);
	s3.calculate(n);
	
	return 0;
}
