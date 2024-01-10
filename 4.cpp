#include <iostream>
using namespace std;

class a
{
	public :
	struct date{
		int date,month,year;
	}b,p,t;
	void get(){
		cout<<"Enter Present date, month and year : ";
		cin>>p.date>>p.month>>p.year;
		cout<<"Enter Birth date, month and year : ";
		cin>>b.date>>b.month>>b.year;
	}
	int cal(){
	    int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	    int temp=0,y,count=0;
	    
	    for(y=b.year;y<=p.year;y++)
	    {
	        
		    if(((y % 4 == 0) && ( y % 100 != 0)) || (y % 400 == 0)){
		    count++;
    		if(y==p.year){
	        if(p.month>2)
	        count++;
	        else if(p.month==2){
	        if(p.date==29)
	        count++;
	        }
	        }
		    }
	    }
	    t.year=p.year-b.year;
		if(p.month>b.month)
		{
		    for(int i=b.month-1;i<p.month-1;i++)
		    temp+=monthDays[i];
		}
		else
		{
		    for(int i=b.month-1;i<12;i++)
		    temp+=monthDays[i];
		    for(int i=0;i<p.month-2;i++)
		    temp+=monthDays[i];
		    t.year--;
		}
		t.date=temp;
		if(p.date>b.date)
		temp=p.date-b.date;
		else
		temp=monthDays[b.month-1]-b.date+p.date;
		t.date+=temp;
			
		t.date+=count;
		t.month=t.date/30;
		t.date=t.date%30;
		temp=t.year*365+t.month*30+t.date+count;
		return temp;
	}
	void display(int n){
	    cout<<"Taking month 30 days in result \nYour Age is ";
		cout<<t.year<<" Year "<<t.month<<" Month "<<t.date<<" Day"<<" ( "<<n<<" Days )[Including Present Day]";
	}
};
int main(){
	a a11;
	int n;
	a11.get();
	n=a11.cal();
	a11.display(n);
	return 0;
}
