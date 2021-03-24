#include<iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int *prime,a,b;
    cout<<"Enter the initial range : ";
    cin>>b;
    cout<<"Enter the final range : ";
    cin>>a;
    prime=(int*)malloc((a+1)*sizeof(int));
    
    for(int i=0;i<a;i++)
    {
        prime[i]=1;
        }
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(prime[i]==1)
        {
            for(int j=2;i*j<a;j++)
            {
                prime[i*j]=0;
            }
        }
    
    }
    for(int i =b;i<a;i++)
    {
        if(prime[i]==1)
        {
            cout<<i<<",";
            }
        }
}
