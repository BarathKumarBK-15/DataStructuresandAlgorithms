#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<bitset>
#include<cmath>
#include<iomanip>
#define vint vector<int>
#define ll long long
#define mod 1000000007
#define vll vector<long long>
#define ld long double
#define mii map<int,int>
#define miv map<int,vector<int>>
#define vf vector<float>
#define vd vector<double>

/*
 
Time Complexity: O(N^2)
Space Complexity: O(N) -> Input Array
 
Check the link below for Visualization:
https://barathkumarbk-15.github.io/SortingAlgorithms/

*/

using namespace std;

void bubbleSort(vint &a, int size) //Sorting function
{
	for(int i=0;i<size-1;i++)
	{
		int count=0;
		for(int j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1]) // Basic Operation -> Comparing consecutive elements
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else
			{
				count++;
			}
		}
		if(count==size-i-1) // Elements are already sorted
		{
			return;
		}
	}
	return;
}

void solve()
{
	//input
	int n;
	cin>>n;
	vint arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//Sorting
	bubbleSort(arr,n);
	
	//Printing sorted array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	} 
	cout<<"\n";
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
	int t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}
