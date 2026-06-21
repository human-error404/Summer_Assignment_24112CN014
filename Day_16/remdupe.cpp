#include<iostream>
using namespace std;
int duplicate(int arr[],int size)
{
    int i=0;
        
        for(int j=1;j<size;j++)
        {
            if(arr[j]!=arr[i])
            {
                arr[i+1]=arr[j];
                i++;
            }
        }
       
    
     return i+1;
    
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers to store in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int size= sizeof(arr)/sizeof(arr[0]);
    int newsize=duplicate(arr,size);
    cout<<"the new array is:"<<endl;    
    for(int i=0;i<newsize;i++)
    {
        cout<<"'"<<arr[i]<<"'";
    }


}