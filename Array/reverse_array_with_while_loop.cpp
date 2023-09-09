#include<iostream>
using namespace std;

int main(){

int arr[6]={1,2,3,4,5,6};

int a=0;
int b=5;

while (a<b)         
{
  int temp=arr[a];
  arr[a]=arr[b];
  arr[b]=temp;


  a++;
  b--;
}
for (int i = 0; i < 6; i++)
{
    cout<<arr[i];
}
}