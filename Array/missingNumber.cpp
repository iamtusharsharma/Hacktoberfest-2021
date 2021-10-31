#include<bits/stdc++.h>
using namespace std;

void missingNumber(int a[],int n)
{
    int num=0;
    int total = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
    num=num+a[i];

    cout<<total - num<<endl;
}

int main()
{
    int a[] = {1,2,3,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    missingNumber(a,n);
}