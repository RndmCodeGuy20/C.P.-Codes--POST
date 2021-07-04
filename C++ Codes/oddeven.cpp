#include<iostream>
using namespace std;

int main()
{
    int n,rem;

    cout<<"Enter the required number: ";
    cin>>n;

    rem = n%2;
    
    if(rem == 0){
        cout<<"The entered number is EVEN"<<endl;
    }
    
    else{
        cout<<"The entered number is ODD"<<endl;
    }
    
    
    return 0;
}