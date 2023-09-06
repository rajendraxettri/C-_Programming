#include<iostream>
using namespace std;

int hello(int n,int arr[]){
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


};
int main()
{
int arr[5]={1,2,3,4,5};
int n= sizeof(arr)/sizeof(arr[0]);

hello(n,arr);

return 0;
}//@rajendra_chimala