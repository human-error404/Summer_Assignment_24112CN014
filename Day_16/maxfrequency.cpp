#include<iostream>
using namespace std;
int maxfreq(int arr[],int size)
{
    int maxcount= 0;
    int highfreq=-1;
    for(int i=0;i<size;i++)
    {
        int cnt=0;
        for(int j=0;j<size;j++)
        {
            if(arr[j]==arr[i])
            {
                cnt++;
            }
        }
        if(cnt>maxcount)
        {
            maxcount=cnt;
            highfreq=arr[i];
        }
    }
    return highfreq;
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
    cout<<"Max frequency number is:"<<maxfreq(arr,size);

}