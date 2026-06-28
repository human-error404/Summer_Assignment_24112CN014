#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    int index=0;
    int count=0;
    cout<<"Give a string:";
    getline(cin,input);
    bool word=false;
    while(input[index]!='\0')
    {   
        if(input[index]==' ')
        {
            word=false;
        } 
        else{
            if(!word)
    {
        count++;
            word=true;
    }
        }
         
          index++;
        }
        cout<<count;
    return 0; 
        
    }
    

