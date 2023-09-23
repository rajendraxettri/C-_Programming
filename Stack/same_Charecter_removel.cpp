#include<iostream>
#include<stack>
using namespace std;



int main()
{

    

stack<char> stack1;
string n = "abbbaca";

for(char c : n){

    if(!stack1.empty() && stack1.top() == c){
stack1.pop();
    }else
    {
        stack1.push(c);
    }
}

stack<char> stack2;

string ans = "";
char c;

while (!stack1.empty())
{
c= stack1.top();
stack1.pop();
stack2.push(c);
 
}

while (!stack2.empty())
{
      ans += stack2.top();
   stack2.pop();
}


cout<<"The result is : "<<ans;

return 0;
}//@rajendra_chimala