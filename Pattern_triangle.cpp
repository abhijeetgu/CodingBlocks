/*Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
                        1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
Explanation
Each number is separated from other by a tab.*/


#include<iostream>

using namespace std;

int main()
{
     int n,i,j;
     cin>>n;

     for(i=1;i<=n;i++)
     {
          for(j=0;j<n-i;j++)
               cout<<"\t";
          for(j=i;j<2*i;j++)
               cout<<j<<"\t";
          for(j=2*i-2;j>=i;j--)
               cout<<j<<"\t";
          cout<<"\n";
     }
}
