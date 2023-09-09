#include<iostream>
using namespace std;

int main(){

int arr[5]={1,2,3,4,0};

int count=0;

for (int i = 0; i < 5; i++)
{
    for (int j = i+1 ; j < 5; j++)
    {
        if(arr[i]+arr[j]==5){
            count++;
        }
    }
    
}
cout<< " The number of pair is "<<count;
return 0;

}