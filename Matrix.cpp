/*22070123129*/
/*Varun Pagote*/
/*Experiment 9*/

#include <iostream>
using namespace std;
int main()
{
    int marks[10]={69,96,54,24,18,7,42,99,33,12},key,i;
    cout<<"Enter the number to be searched : ";
    cin>>key;
    for(i=0;i<10;i++)
    {
        if(marks[i]==key)
        {
        cout<<"The key exist in array at position "<<i<<endl;
        break;
        }
    }
    if(i==10)
    cout<<"The key dosen't exist in array";
}