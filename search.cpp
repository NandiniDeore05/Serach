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

void BinarySearch(int a[],int key,int n)
{
    cout<<"IT'S BINARY SEARCH"<<endl;
    int i,j,m;
    i=0;
    j=n-1;
    int flag=0;
    while(i<=j)
    {
        m=(i+j)/2;
        if(a[m]==key)
        {
            flag=1;
            break;
        }
        if(a[m]>key)
        {
            j=m-1;
        }
        else
        {
            i=m+1;
        }
    }
    if(flag)
    {
        cout<<"THE ELEMENT IS FOUND AT "<<m+1<<" POSITION"<<endl;
    }
    else
    {
        cout<<"NOT FOUND"<<endl;
    }
}

void FibonacciSearch(int *a, int start, int end, int *fab, int index, int item)
{
	int i, mid;
 
	// Assigning middle of the array using Fibonacci element.
	mid = start+fab[index-2];
 
	// Return if item found at mid index.
	if(item == a[mid])
	{
		cout<<"\n item found at "<<mid<<" index.";
		return;
	}
	// Return if item found at start index.
	else if(item == a[start])
	{
		cout<<"\n item found at "<<start<<" index.";
		return;
	}
	// Return if item found at end index.
	else if(item == a[end])
	{
		cout<<"\n item found at "<<end<<" index.";
		return;
	}
	// If mid becomes start or end of the sub-array then element not found.
	else if(mid == start || mid == end)
	{
		cout<<"\nElement not found";
		return;
	}
	// According to the item value choose the partion to proceed further.
	else if(item > a[mid])
		FibonacciSearch(a, mid, end, fab, index-1, item);
	else
		FibonacciSearch(a, start, mid, fab, index-2, item);
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
