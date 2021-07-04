#include<iostream>
using namespace std;

int main(){
    
    int i,j,row,rem;

    cout<<"Enter the number of rows: ";
    cin>>row;

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            rem = (i+j)%2;
            if(rem==0){
                cout<<1;
            } else{
                cout<<0;
            }
        }
        cout<<endl;
    }

    return 0;
}