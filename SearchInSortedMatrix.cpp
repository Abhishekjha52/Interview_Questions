//search in sorted matrix
#include<bits/stdc++.h>
using namespace std;
bool searchInSortedMatrix(vector<vector<int>>&a, int target)
{
	if(a.size()==0 && a[0].size()==0)return false;
	int row=0, col=a.size()-1;
	while(row<a[0].size() && col>=0)
	{
		if(a[row][col]==target)return true;
		else if(a[row][col]>target)col--;
		else
			row++;
	}
	return false;
}
	
int main()
{
	int n;cin>>n;
	vector<vector<int>>a(n, vector<int>(n));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int target;cin>>target;
	if(searchInSortedMatrix(a, target))
		cout<<"Present"<<"\n";
	else
		cout<<"Not present"<<"\n";
}
	
