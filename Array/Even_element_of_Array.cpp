#include<iostream>
using namespace std;

int main(){

int arr[5]={2,1,15,4,20};

int num=0;
int odd;

cout<<"The smallest number is : ";

for (int i = 0; i < 5; i++)
{
    if(arr[i] % 2 == 0 ){
        cout<<arr[i]<<", ";
    num=num+1;
    }
}
cout<<"\n\nThe number of even is " <<num;


    return 0;
}