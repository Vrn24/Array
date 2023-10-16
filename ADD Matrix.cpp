/*22070123129*/
/*Varun Pagote*/
/*ADD Matrix*/

#include <iostream>
using namespace std;
int main()
{
    int ary[10]={11,22,33,44,55,66,77,88,99,00},key,i,found=0;
    cout<<"Enter the key : ";
    cin>>key;
    for(i=0;i<10;i++)
    {
        if(ary[i]==key)
        {
        cout<<"The key exist in the array at position "<<i<<endl;
        found=1;
        break;
        }
    }
    if(found==0)
    cout<<"The key does not exist in the the array";
}
