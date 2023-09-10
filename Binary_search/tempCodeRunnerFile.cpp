
    {
cout<<"The key is "<<i<<" position in the array !";
        break;
    }else{
cout<<"Key not found !";

    }
    
}


};


int main()
{
int arr[5]={1,2,3,4,5};

int n= sizeof(arr)/sizeof(arr[0]);
int key=2;
searcharray(n,key,arr);
return 0;
}//@rajendra_chimala