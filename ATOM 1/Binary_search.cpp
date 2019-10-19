#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> arr;
    for( int i=0;i<5;i++)
        arr.push_back(i);

    for( int i=0;i<5;i++)
        cout<<arr[i];

    int search = 2;

    int lb=0;
    int ub=4;
    
    int mid=lb+(ub-lb)/2;

    int flag=1;

    while(flag!=0)
    {
        if(lb>ub)
            exit(1);
        mid=lb+(ub-lb)/2;
        if(arr[mid]==search)
            {
                flag=0;
            }
        if(search>arr[mid])
            lb=mid+1;
        else
        {
            ub=mid-1;
        }
        

    }

    if(!flag)
        cout<<"found";

    return 0;
}