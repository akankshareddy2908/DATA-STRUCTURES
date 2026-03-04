#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;
    int choice,x,key,n;

    do{
        cout<<"\n\n-----VECTOR OPERATIONS MENU----";
        cout<<"\n1.Insert elements";
        cout<<"\n2.Display elements";
        cout<<"\n3.Sort elements";
        cout<<"\n4.Search element";
        cout<<"\n5.Exit";
        cout<<"\n6.Delete";
        cout<<"\nEnter your choice:";
        cin>>choice;


        switch(choice){


            case1:
            cout<<"Enter number of elements to insert:";
          cin>>n;
          cout<<"Enter elements:\n";
          for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);

          }
          break;

          case2:
          if(v.empty()){
          cout<<"Vector is empty";

          }else{
            cout<<"Vector elements:";
            for(vector<int>::iterator it=v.begin();it !=v.end();it++){
                cout<<*it<<" ";
                }
                
            }
            break;
            case3:
            if(v.empty()){
                cout<<"Vector is empty,cannot sort";
            }
            else{
                sort(v.begin(),v.end());
                cout<<"Vector sorted successfully";
            }
            break;
            case4:
            if(v.empty()){
                cout<<"vector is empty,cannot search";
            }else{
                cout<<"Enter elements to search:";
                cin>>key;
                vector<int>::iterator pos=find(v.begin(),v.end(),key);
                if(pos!=v.end()){
                    cout<<"Elements found at position"<<(pos-v.begin())+1;
                }else{
                    cout<<"Elements not found";
                }
            }
            break;

            case5:
            cout<<"Existing program...";
            break;
            default:
            cout<<"Invalid choice!Try again.";
          }
        }
        while(choice!=5);

        return 0;
    } 
