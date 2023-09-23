#include<iostream>
#include<stack>
using namespace std;



int main()
{
stack<int> sta;

int num = 123;
sta.push(num);

while (!sta.empty())
{
    cout<<sta.top();
    sta.pop();
}






return 0;
}//@rajendra_chimala