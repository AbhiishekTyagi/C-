//Demostrate the use of forEach loop in c++.
#include<iostream>
using namespace std;
int main(void)
{
    int size;
    cout<<"Enter the Size of an array"<<endl;
    cin>>size;
    int Array[size];
    cout<<"Enter the values in the Arrays"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"Print the enter values in the array"<<endl;
    for(int x:Array)
    {
        cout<<x<<" ";
    }
}