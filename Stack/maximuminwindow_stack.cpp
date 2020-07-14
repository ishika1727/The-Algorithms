// Maximum element in a window of size k
#include <bits/stdc++.h> 
using namespace std; 

void print_max(int a[], int n, int k) 
{ 
	
	int m[n]; 

	// Update m array similar to 
	// finding next greater element 
	stack<int> s; 
	s.push(0); 
	for (int i = 1; i < n; i++) { 
		while (!s.empty() && a[s.top()] < a[i]) { 
			m[s.top()] = i - 1; 
			s.pop(); 
		} 
		s.push(i); 
	} 
	while (!s.empty()) { 
		m[s.top()] = n - 1; 
		s.pop(); 
	} 
	int j = 0; 
	for (int i = 0; i <= n - k; i++) { 

		// j < i is to check whether the 
		// jth element is outside the window 
		while (j < i || m[j] < i + k - 1) 
			j++; 
		cout << a[j] << " "; 
	} 
	cout << endl; 
} 

// Driver code 
int main() 
{ 
	int a[100000]; 
	int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
	int k;
    cin>>k; 
	print_max(a, n, k); 

	return 0; 
} 
