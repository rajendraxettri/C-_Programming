#include<iostream>
using namespace std;

int main(){

int arra[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}
};
int arrb[3][3]={
    {1,2,3},{4,5,6},{7,8,9}
};

int sum[3][3];

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        sum[i][j]=arra[i][j]+arrb[i][j];
    }
    
}
 cout<< "The sum of two matrix is following :"<<endl;
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j < 3  ; j++)

   {
    cout<<sum[i][j]<<" ";
   }
   cout<<endl;

    
}






    return 0;
}