#include<iostream>
using namespace std;

int main(){

    int n,sum,counter;

    sum = 0;

    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(counter=1;counter<=n;counter++){

        cout<<counter<<endl;

        sum+=counter;
    }
    cout<<sum<<endl;

return 0;
}