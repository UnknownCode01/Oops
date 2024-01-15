#include <iostream>

using namespace std;
class book {
    int p[10],c[10];
    string bn[10],bathnm[10];
    public:
    void input(int n) {
        int i;
        for (i=0;i<n;i++) {
            cout<<"Enter Book Name :";
            cin>>bn[i];
            cout<<"Enter Author Name :";
            cin>>bathnm[i];
            cout<<"Enter Book Price :";
            cin>>p[i];
            cout<<"Enter No. of copies :";
            cin>>c[i];
        }
    }
    void check(int n) {
        string a;
        int no,i;
        cout<<"Enter Book Name to search :";
        cin>>a;
        for (i=0;i<n;i++) {
            if (a==bn[i]) {
                cout<<bn[i]<<"\n"<<bathnm[i]<<"\n"<<p[i]<<"\n"<<c[i]<<"\n";
                cout<<"Enter no. of copies of book required :";
                cin>>no;
                if (no>c[i]) {
                    cout<<"Not enough books\n";
                    break;
                }
                else {
                    cout<<"Total Bill = "<<p[i]*no;
                    cout<<"\nNo. of copies remaining :"<<c[i]-no;
                }
            }
        }
    }
    void update(int n) {
        string a;
        int n1,p1,i;
        cout<<"\nEnter Book to update :";
        cin>>a;
        for (i=0;i<n;i++) {
            if (a==bn[i]) {
                cout<<"Enter new price of book :";
                cin>>p1;
                cout<<"Enter new no. of copies :";
                cin>>n1;
                p[i]=p1;
                c[i]=n1;
                cout<<"Updated details :\n";
                cout<<bn[i]<<"\n"<<bathnm[i]<<"\n"<<p[i]<<"\n"<<c[i]<<"\n";
            }
        }    
    }
};
int main()
{
int n,ch,a=1;
cout<<"Enter no. of books :";
cin>>n;
book ob;
cout<<"1) Enter New Book\n";
cout<<"2) Search a Book\n";
cout<<"3) Update entry for a book\n";
cout<<"4) Exit\n";
while (a>0) {
    cout<<"Enter choice :";
    cin>>ch;
    switch(ch) {
        case 1:
        ob.input(n);
        break;
        case 2:
        ob.check(n);
        break;
        case 3:
        ob.update(n);
        break;
        case 4:
        exit (0);
    }
}

    return 0;
}
