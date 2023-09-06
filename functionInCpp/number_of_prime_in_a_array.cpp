#include<iostream>
using namespace std;
int primeCount12(int n){

for (int i = 1; i <= n; i++)
{
   if(i%n == 0){
    
   }
}
return 0;

}
int primeCount(int arr[], int n){
int count =0;
for (int i = 1; i <= n; i++)
{
     count +=  primeCount12(arr[i]);
}
cout<<"the number of prime is "<<count;


}

int main()
{
int arr[5]={3,2,8,9,13};

int n= sizeof(arr)/sizeof(arr[0]);
primeCount(arr,n);

return 0;
}//@rajendra_chimala