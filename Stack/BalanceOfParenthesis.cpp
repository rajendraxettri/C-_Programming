#include<iostream>
#include<stack>
using namespace std;



int main()
{
    string val = "((())";
stack<char> st;


for (int i = 0; i < 5 ; i++)
{
 if (st.size() != 0 && st.top() == '(' && val[i]==')')
 {
    st.pop();
 }else{
    st.push(val[i]);
 }
 
}

// st.size() == 0 ? cout<<"Balenced !" : cout<<"Not Balenced !";
if (st.size() == 0){
     cout<<"Balenced !";
}else{
cout<<"Not Balenced !";
}



return 0;
}//@rajendra_chimala