#include<iostream>
using namespace std;

void myFunction(int arr[], int n){
    if (n==-1)
    {
        return;
    }
    cout<<arr[n]<<" ";

    myFunction(arr,n-1);
    
}

int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int n= sizeof(arr)/sizeof(arr[2]);
n=n-1;
myFunction(arr,n);


return 0;
}//@rajendra_chimala