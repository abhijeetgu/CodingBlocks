/* Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Input Format
Enter value of N ( >=5 )

Constraints
5 <= N <= 99

Output Format
Print the required pattern.

Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation
Catch the pattern for the corresponding input and print it accordingly.*/

#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define MAX 100000003
using namespace std;

int main()
{
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<"*";
			for(ll j=1;j<n/2;j++)
				cout<<" ";
			for(ll j=n/2;j<n;j++)
				cout<<"*";
		}
		else if(i==n-1)
		{
			for(ll j=0;j<=n/2;j++)
				cout<<"*";
			for(ll j=n/2;j<n-2;j++)
				cout<<" ";
			cout<<"*";
		}
		else if(i==n/2)
		{
           for(ll j=0;j<n;j++)
           	   cout<<"*";
		}
		else if(i>0&&i<n/2)
		{
			cout<<"*";
			for(ll j=1;j<n/2;j++)
				cout<<" ";
			cout<<"*";
		}
		else
		{
		    for(ll j=0;j<n/2;j++)
		         cout<<" ";
		    cout<<"*";
		    for(ll j=n/2+1;j<n-1;j++)
		       cout<<" ";
		    cout<<"*";
		}
        cout<<endl;
	}
	return 0;
}
