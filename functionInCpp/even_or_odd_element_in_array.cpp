#include<iostream>
using namespace std;

int newfunction(int arr[], int n){

    int count_even,count_odd;
for (int i = 0; i < n; i++)
{
    if (arr[i]%2 == 0)
    {
        count_even++;
    }
    else{
        count_odd++;
    }
    
}
cout<<"The number of Even element in array is :"<<count_even<<endl;
cout<<"The number of Odd element in array is :"<<count_odd<<endl;

return 0;
}

int main()
{
    int arr[5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
    newfunction(arr,n);


return 0;
}//@rajendra_chimala