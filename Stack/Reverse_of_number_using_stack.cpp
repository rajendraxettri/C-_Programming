#include<iostream>
#include<stack>
using namespace std;



int main()
{

stack<int> st;

int num;
cout<<"Enter a numebr : ";
cin>>num;

int val=0;

while (num != 0)
{
    val = num % 10;
    st.push(val);
    val = val/10;
}


int rev=0;
int mult=1;
int temp = 0;

while (!st.empty())
{
   val = st.top();
   st.pop(); 
   temp = val*mult;
   rev = rev+temp;
   mult = mult*10;
}

cout<<"The reverse of given number is : "<<rev;

return 0;
}//@rajendra_chimala