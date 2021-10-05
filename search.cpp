#include<iostream>
using namespace std;
void LinearSearch(int a[],int key,int n)
{
    cout<<"IT'S LINEAR SEARCH"<<endl;
    int flag=0;
    int i=0;
    while(i<n)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag)
    {
        cout<<"THE ELEMENT FOUND AT "<<i+1<<" POSITION"<<endl;
    }
    else
    {
        cout<<"NOT FOUND"<<endl;
    }    
}

void SentinelSearch(int a[],int key,int n)
{
    cout<<"IT'S SENTINEL SEARCH"<<endl;
    a[n]=key;
    int i=0;
    while(i<=n)
    {
        if(a[i]==key)
        {
            break;
        }
        i++;
    }
    if(i==n)
    {
        cout<<"NOT FOUND"<<endl;
    }
    else
    {
        cout<<"THE ELEMENT IS FOUND AT "<<i+1<<" POSITION"<<endl;
    }
}

int main()
{
    int a[10],n,k;
    cout<<"ENTER TOTAL NUMBER OF ELEMENTS"<<endl;
    cin>>n;
    cout<<"NOW ENTER THE ELEMENTS"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER THE ELEMENT TO BE SEARCH"<<endl;
    cin>>k;
    LinearSearch(a,k,n);
    SentinelSearch(a,k,n);
    BinarySearch(a,k,n);
    return 0;
}
