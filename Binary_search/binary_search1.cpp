#include<iostream>
using namespace std;
int searcharray(int n, int key, int arr[]){
int count=0;
for (int i = 0; i < n; i++)
{
    if (arr[i] == key)
    {
cout<<"The key is "<<i<<" position in the array !";
        count++;
    }


    
}
if (count !=1)
{
cout<<"Key not found !";}


    return 0;


};


int main()
{
int arr[5]={1,2,3,4,5};

int n= sizeof(arr)/sizeof(arr[0]);
int key=20;
searcharray(n,key,arr);
return 0;
}//@rajendra_chimala