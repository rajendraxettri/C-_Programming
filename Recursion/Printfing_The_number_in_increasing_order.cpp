#include<iostream>
using namespace std;

void mynewfunction(int n){

    if (n==10)
    {
        return;
    }
    cout<<n<<", ";

    mynewfunction(n+1);
    


}

int main()
{
int num=1;
mynewfunction(num);
return 0;
}//@rajendra_chimala