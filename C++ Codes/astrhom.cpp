#include<iostream>
using namespace std;

int main(){

    int rows,i,j,spc;

    cout<<"Enter the number of rows: ";
    cin>>rows;

  for(i=1;i<=rows;i++){
      for(spc=1;spc<=rows-i;spc++){
          cout<<" ";
      }
      for(j=1;j<=rows;j++){
          cout<<"*";
      }
      
      cout<<endl;
  }

    return 0;
}