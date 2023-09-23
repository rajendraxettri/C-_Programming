#include<iostream>
#include<queue>
#include<stack>
using namespace std;



int main()
{
    int arr[] = {1,2,3,4,5};

    queue<int> q1;

    for (int i = 0; i < 5; i++)
    {
        q1.push(arr[i]);
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<q1.front();
    //     q1.pop();
    // }
    // while (!q1.empty())
    // {
    //     cout<<q1.front();
    //     q1.pop();
    // }
    

 stack<int> s;

    while (!q1.empty())
    {
      s.push(q1.front());
      q1.pop();
    }

    while (!s.empty())
    {
        q1.push(s.top());
        s.pop();
    }
cout<<"the reverse is : ";

    while (!q1.empty())
    {
    cout<<q1.front()<<" ";
    q1.pop();
        }
    
    
    
    
    


return 0;
}//@rajendra_chimala