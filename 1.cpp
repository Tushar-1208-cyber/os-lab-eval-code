#include<iostream>
#include<algorithm>
using namespace std;

struct Process 
{
    int bt, wt, tat;
};

bool compare(Process a , Process b)
{
    return a.bt < b.bt;
}

int main()
{
    int n;
    cout<<"Enter the number of processes";
    cin>>n;

    Process p[n];
    cout<<"Enter the burst time "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>
    }
}