#include<iostream>
#include<stack>
using namespace std;



int main()
{

int arr[] = {1,2,3,4,5};

stack<int> st;

for (int i = 0; i < 5; i++)
{
    st.push(arr[i]);
}

stack<int> st1;
cout<<"The reverse number is : ";
while (!st.empty()){
    cout<<st.top()<<" ";
    st1.push(st.top());
    st.pop();
}

cout<<"\nThe  number is : ";
while (!st1.empty()){

    cout<<st1.top()<<"  ";
    st1.pop();
}




return 0;
}//@rajendra_chimala