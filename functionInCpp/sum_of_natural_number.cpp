#include<iostream>
using namespace std;
int printSum(int x){

    int sum=0;
    for (int i = 0; i < x; i++)
    {
        sum = sum +i;
    }
    return sum;
}


int main()
{
cout<<"The sum of n natural number is : "<<printSum(5);

return 0;
}//@rajendra_chimala