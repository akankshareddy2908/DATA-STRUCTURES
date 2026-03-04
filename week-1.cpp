#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int rollnumber;
    string name;
    float marks;

    public:
    student(){
        rollnumber=0;
        name=" ";
        marks=0.0;

    }

    student(int r,string n,float m){
        rollnumber=r;
        name=n;
        marks=m;
    }
    void input(){
        cout<<"enter rollnumber:";
        cin>>rollnumber;
        cin.ignore();
        cout<<"enter name";
        getline(cin,name);
        cout<<"enter marks";
        cin>>marks;
    }

    void display(){
        cout<<rollnumber<<"\t"<<name<<"\t"<<marks<<endl;

       
    }
};

    int main(){
        int n;
        cout<<"Enter no.of students:";
        cin>>n;
//dynamic allocation of student objects
       student*students=new student[n];
     //input details
     for(int i=0;i<n;i++){
        cout<<"\nenter details of student"<<i+1<<endl;
        students[i].input();

     }
     //display details
     cout<<"\nrollno\tname\tmarks\n";
     for(int i=0;i<n;i++){
        students[i].display();
     }
    
    delete[]students;
    return 0;
}