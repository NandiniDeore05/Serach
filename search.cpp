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
