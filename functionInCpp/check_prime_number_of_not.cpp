#include<iostream>
using namespace std;
int checkNum(int x){
    int count=0;
for (int i = 2; i < x; i++)
{
    if(x%i==0){
        return 0;
        
    }

    return 1;
}

}


int main()
{
    int num;
cout<<"Enter a number : "<<endl;
cin>>num;

int a = checkNum(num);
if(a==1){
    cout<<"Prime Number !";
}else{

    cout<<"Not a Prime number !";
}


return 0;
}//@rajendra_chimala