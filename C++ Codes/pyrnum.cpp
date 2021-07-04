#include<iostream>
using namespace std;

int main(){

    int i,j,row,spc;

    cout<<"Enter the number of rows needed: ";
    cin>>row;

    for(i=1;i<=row;i++){
        for(spc=1;spc<=row-i;spc++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}