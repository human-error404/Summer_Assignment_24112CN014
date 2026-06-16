#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse(vector<int>& vec, int start,int end)
{
    int l=end-start+1;
    for(int i=0;i<l/2;i++)
    {
            swap(vec[start-i],vec[end+i]);
    }
}
void rotatearr(vector<int>& vec, int d)
{
    int n=vec.size();
    d=d%n;
    reverse(vec,0,d-1);
    reverse(vec,d,n-1);
    reverse(vec,0,n-1);



}
int main()
{
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    vector<int> vec(n);
    cout<<"enter "<<n<<" numbers:";
     for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int d;
    cout<<"enter number of elements to rotate:";
    cin>>d;
    rotatearr(vec,d);
    cout<<"the array is:"<<endl;    
    for(int i=0;i<n;i++)
    {
        cout<<"'"<<vec[i]<<"'";
    }
    return 0;
}