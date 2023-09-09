#include<iostream>
using namespace std;

int main(){

int arr[5]={2,1,15,3,20};

int min[0];

for (int i = 0; i < 5; i++)
{
    if(arr[i] < min[0]){
        min[0] = arr[i];

    }
}
cout<<"The smallest number is : "<<min[0];


    return 0;
}