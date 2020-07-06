#include <bits/stdc++.h>
using namespace std;

int jump_search(int arr[],int n,int key)
{
	int jump,j=0,i,flag=0;
	jump=sqrt(n);
	while(arr[j]<=key)
	{
		j=j+jump;
		if(j>=n)
		{
			return -1;
			
	}
	while(jump>=0)
	{
		if(arr[j]==key)
		{
			flag=1;
			break;
		}
		j--;
		jump--;	
	}
	if(flag==1)
	{
		return j;
	}
	return -1;
}

int main()
{
	int n,arr[100],i,key,ans;
	cout<<"Enter size of the array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be searched:";
	cin>>key;
	ans=jump_search(arr,n,key);
	if(ans>=0)
	{
		cout<<"Element found at index: "<<ans;	
	}
	else
	{
		cout<<"Element not found";
	}
	return 0;
}
