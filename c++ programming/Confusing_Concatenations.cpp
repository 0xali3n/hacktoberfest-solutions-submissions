/*
Chef initially had two non-empty arrays AA and BB, where both arrays contain distinct elements. Moreover, there is no common element in the arrays AA and BB.

Chef forms another array CC from the arrays AA and BB using the following process :

Let XX denote the leftmost element of array AA and YY denote the leftmost element of array BB.
If YY is smaller than XX, delete YY from BB and append it to the end of CC.
If XX is smaller than YY, delete XX from AA and append it to the end of CC.
If either array AA or BB becomes empty, append all the remaining elements of the other array to the end of CC.
Chef forgot the arrays AA and BB but remembers the array CC. Find any two valid non-empty arrays AA and BB that will yield the given array CC. If it is not possible, print -1−1.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a space-separated integer NN — the number of elements in array CC.
The next line contains NN space-separated integers denoting the elements of the array CC.
Output Format
For each test case, if a solutions exists, print any two valid arrays AA and BB along with their lengths respectively . For example, if A= [1,7]A=[1,7] and B =[4,10,2]B=[4,10,2], then print it as :

2 
1 7
3
4 10 2
Else, if answer doesn't exist, print -1−1 in a single line.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    vector<int> arr1, arr2,orr;
	    int n;
	    cin>>n;
		int max = INT_MIN;
		int k;
	    for(int i=0;i<n;i++){
	        int temp ;
	        cin>>temp;
			if(temp > max) {
				k = i;
				max = temp;
			}
	        orr.push_back(temp);
	        // cout<<temp<<endl;
		}
		// cout<<k<<endl;
		if(k==0 )  cout<<-1<<endl;
		else{cout<<k<<endl;
			for (int i = 0 ;i<k; i++){
				cout<<orr[i]<<" ";
			}
			cout<<endl;
			cout<<n-k<<endl;
			for (int i = k ;i<n; i++){
				cout<<orr[i]<<" ";
			}}
		cout<<endl;
	}
	
	return 0;
  
}
