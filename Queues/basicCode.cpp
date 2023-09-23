#include<iostream>
#include<queue>
using namespace std;



int main()
{
    int arr [] = {1,2,3,7,4};
    queue<int> q;

for (int i = 0; i < 5; i++)
{
    q.push(arr[i]);

}
cout<<"The element of Queues are : \n";
while(!q.empty()){
    cout<<q.front()<<" \n";
    q.pop();
}

// int ss = 0;
// while(ss == 4){
//     ss += 1;
//     while (q.size()==1)
//     {
//        q.pop();
//     }
//     cout<<q.front
    
// }





return 0;
}//@rajendra_chimala