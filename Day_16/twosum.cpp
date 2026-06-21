#include<iostream>
using namespace std;
void maxfreq(int arr[],int size)
{
    int twosum=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]+arr[i]==0)
            {
                cout<<arr[i]<<" and "<<arr[j]<<endl;
                return;
            }
        }
    }
}
int main()
{
    int n,N;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Pair with sum 0:";
    maxfreq(arr,size);

}