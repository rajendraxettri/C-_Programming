#include<iostream>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};

int j=0;
int arr2[5];

for (int i = 4; i>=0; i--)
{
    arr2[j]=arr[i];
    j++;
}
cout<<"The reverse element of array is : "<<endl;
for (int i = 0; i < 5; i++)
{
    cout << arr2[i] << " "<<endl;
}



return 0;

}