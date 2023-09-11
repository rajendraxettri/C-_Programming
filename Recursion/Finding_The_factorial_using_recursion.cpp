#include<iostream>
using namespace std;

int myFunction(int num){

    if(num==0){
        return 1;
    }
    return num * myFunction(num-1);
}

int main()
{
int n=5;

cout<<"The factorial of is  "<<myFunction(n);

return 0;
}//@rajendra_chimala