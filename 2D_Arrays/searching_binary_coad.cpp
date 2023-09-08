#include<iostream>
using namespace std;

int main(){

int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
   
int search;
cout<<"Search here :.......";
cin>>search;

int count =0 ;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
       if(search == arr[i][j]){
        count = count + 1;
        cout<<"The "<<arr[i][j]<< "  is Exist at row "<<i<<" and column "<<j;
       }
    }
    
    
}

if(count ==0){

    cout<<"The element dosnot Exist in this array !" ;
}


 


return 0;


}