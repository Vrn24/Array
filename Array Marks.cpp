/*22070123129*/
/*Varun Pagote*/
/*Print Marks*/

#include<iostream>
using namespace std;
int main()
{
    int marks[10] = {90,89,78,87,86,85,78,98,97,100};
    int i;
    for(int i = 0;i<10;++i)
    cout<<"\nMarks"<<":"<<marks[i];
}
/*Output
Marks:90 
Marks:89 
Marks:78 
Marks:87 
Marks:86 
Marks:85 
Marks:78 
Marks:98 
Marks:97 
Marks:100
*/

/*22070123129*/
/*Varun Pagote*/
/*Print Marks from User*/

#include<iostream>
using namespace std;
int main()
{
    int marks[10];
    int i;
    for(i=0;i<10;i++){
        cout<<"Enter the marks of each subjects:"<<endl;
        cin>>marks[i];
    }
    cout<<"\n Enter the marks of subjects are:\n";
    for(i=0;i<10;i++){
        cout<<"\n marks"<<":"<<marks[i];
    }
} 
/*
Output
Enter the marks of each subjects:
98 
Enter the marks of each subjects:
93
Enter the marks of each subjects:
92
Enter the marks of each subjects:
94
Enter the marks of each subjects:
95
Enter the marks of each subjects:
96
Enter the marks of each subjects:
91
Enter the marks of each subjects:
97
Enter the marks of each subjects:
99
Enter the marks of each subjects:
100

 Enter the marks of subjects are:

 marks:98
 marks:93
 marks:92
 marks:94
 marks:95
 marks:96
 marks:91
 marks:97
 marks:99
 marks:100
*/