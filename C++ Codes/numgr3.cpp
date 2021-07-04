#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"Greatest number is: "<<a<<endl;
        }
        else{
            cout<<"Greatest number is: "<<b<<endl;
        }
    }
    else{
        if(c>b){
            cout<<"Greatest number is: "<<c<<endl;
        }
        else{
            cout<<"Greatest number is: "<<b<<endl;
        }
    }
    return 0;
}