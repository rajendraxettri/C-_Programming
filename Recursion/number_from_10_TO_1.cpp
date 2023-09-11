#include<iostream>
using namespace std;
void myfunction(int n){

    if (n==0)
    {
        return;
    }
cout<<n<<" ";

myfunction(n-1);

    
}


int main()
{

 int num=10;
 myfunction(num);

return 0;
}//@rajendra_chimala