#include<iostream>
using namespace std;

int main(){

int arr[5]={2,1,15,3,20};

int max[0];

for (int i = 0; i < 5; i++)
{
    if(arr[i] > max[0]){
        max[0] = arr[i];

    }
}
cout<<"The gratest number is : "<<max[0];


    return 0;
}