#include<iostream>
using namespace std;

void myFunction(int arr[], int n, int i){
    if (i==n)
    {
return;
    }
    cout<<arr[i],"\n ";

    myFunction(arr, n, i+1);
    

}

int main()
{

int arr[7]={1,2,3,4,5,7,8};
int n= sizeof(arr)/sizeof(arr[0]);
myFunction(arr,n,0);
return 0;
}//@rajendra_chimala