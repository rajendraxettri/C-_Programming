//WAP to given two numbers start and end , writes a function thats prints all the number from start to end;
#include<iostream>
using namespace std;
int myfunction(int f, int l){
cout<<"The numbre between "<<f<<" to "<<l<<" is :";
for (int i = f+1; i < l; i++)
{
    cout<<i<<" ";
}

};

int main()
{
myfunction(1,50);

return 0;
}//@rajendra_chimala