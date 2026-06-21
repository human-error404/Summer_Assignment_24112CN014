#include<iostream>
using namespace std;
int missingnumberfinder(int arr[],int size,int N)
{
    for(int i=1;i<=N;i++)
    {
        bool found=false;
        for(int j=0;j<size;j++)
        {
            if(arr[j]==i)
            {
                found=true;
                break;
            }
        }
        if(!found)
        {
            return i;
        }
    }
    return -1;
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
    cout<<"give a range to check"<<N<<endl;
    cin>>N;
    cout<<"Missing number is:"<<missingnumberfinder(arr,size,N);

}