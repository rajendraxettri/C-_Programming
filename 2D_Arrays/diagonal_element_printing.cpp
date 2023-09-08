#include<iostream>
using namespace std;

int main(){
int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

cout<<"The primary diagonal of given matrix : "<<endl;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        if(i==j){
            cout<<arr[i][j];
        }else{
            cout<<" ";
        }
    }
    cout<<"\n";
    
}
cout<<"The second Diagonal element of given array :\n";
int a=2;

for (int i = 0; i < 3; i++)
{
    cout<<arr[i][a]<<"  \n";
    a--;
}



}