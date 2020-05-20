/*Given an array A of size N , write a function that implements insertion sort on the array. Print the elements of sorted array.

Input Format
First line contains a single integer N denoting the size of the array. Next line contains N space seperated integers where ith integer is the ith element of the array.

Constraints
1 <= N <= 1000
|Ai| <= 1000000

Output Format
Output N space seperated integers of the sorted array in a single line.

Sample Input
4
3 4 2 1
Sample Output
1 2 3 4
Explanation
For each test case, write insertion sort to sort the array.*/



#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int i;
    int a[t];

    for(i=0;i<t;i++)
        cin>>a[i];
    sort(a,a+t);
    for(i=0;i<t;i++)
        cout<<a[i]<<"\n";
}
