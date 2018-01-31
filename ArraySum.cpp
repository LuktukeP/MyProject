/*
Given an array of integers, can you find the sum of its elements?

Input Format:
The first line contains an integer, , denoting the size of the array.
The second line contains space-separated integers representing the array's elements.

Output Format:
Print the sum of the array's elements as a single integer. 
*/

#include <iostream>
#include <vector>
using namespace std;

int sumOfArr(int n,const vector<int>& ar)
{
    int sum=0;
   for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<< "Enter size of array"<<endl;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of Array "<<sumOfArr(n,arr)<<endl;
    
    return 0;
}
