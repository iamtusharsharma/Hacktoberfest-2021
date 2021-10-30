#include<iostream>
using namespace std;
int uniqueElement(int input[],int size)
{
    int req=input[0];
    for(int i=1;i<size;i++)
    {
        req=req^input[i];
    }
    return req;
}
int main()
{
    int size;
    cin>>size;
    int *input=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
    cout<<uniqueElement(input,size);
    delete[] input;
    
}
//Code contributed by Aryan Modi