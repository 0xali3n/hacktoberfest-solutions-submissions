/*
Problem
Vishal loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.

The track on which he runs is an \text{N}N kilometres long straight path. There are \mathbf{a_i}a 
i
​
  girls standing within the \text{ith}ith kilometre of this path. A girl will be impressed only if Vishal is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of \text{K}K kilometres. Now Vishal wants to know what is the maximum number of girls that he can impress.

Input
First line of the input contains the number of testcases \text{T}T.

For each test case,

First line contains two space-separated integers \text{N}N and \text{K}K, the length of the track and the maximum distance he can run at his best speed.

Second line contains N space-separated integers, the number of girls within each kilometre of the track.

Output
For each test case print one line containing an integer, denoting the maximum number of girls Vishal can impress.

Constraints
1 \leq \text{T} \leq 101≤T≤10

1 \leq \text{K} \leq \text{N} \leq 1001≤K≤N≤100

1 \leq \mathbf{a_i} \leq 1001≤a 
i
​
 ≤100

Sample 1:
Input

1
7 2
2 4 8 1 2 1 8

Output
12
Explanation:
He can impress 4+8=12 girls if he runs at his best speed between the 2nd and the 3rd kilometre, inclusive.

Problem
Vishal loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.

The track on which he runs is an \text{N}N kilometres long straight path. There are \mathbf{a_i}a 
i
​
  girls standing within the \text{ith}ith kilometre of this path. A girl will be impressed only if Vishal is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of \text{K}K kilometres. Now Vishal wants to know what is the maximum number of girls that he can impress.

Input
First line of the input contains the number of testcases \text{T}T.

For each test case,

First line contains two space-separated integers \text{N}N and \text{K}K, the length of the track and the maximum distance he can run at his best speed.

Second line contains N space-separated integers, the number of girls within each kilometre of the track.

Output
For each test case print one line containing an integer, denoting the maximum number of girls Vishal can impress.

Constraints
1 \leq \text{T} \leq 101≤T≤10

1 \leq \text{K} \leq \text{N} \leq 1001≤K≤N≤100

1 \leq \mathbf{a_i} \leq 1001≤a 
i
​
 ≤100

Sample 1:
Input

1
7 2
2 4 8 1 2 1 8

Output
12
Explanation:
He can impress 4+8=12 girls if he runs at his best speed between the 2nd and the 3rd kilometre, inclusive.





*/

//  Code

#include<iostream>
 using namespace std;
 
 int maximum(int max[],int size){
     int m = max[0];
       for(int i=0;i<size;i++){
            if(m<max[i]){
                 m =max[i];
            }
       }
      return m;
 }
 
 int main(){
     int i,j,n,k,count=0,sum;
     int test;
     cin>>test;
      while(test--){
      cin>>n>>k;
       int arr[n];
            for(i=0;i<n;i++){
                 cin>>arr[i];
            }
        int size2 = n - k +1;
            int max[size2];
              for(i=0,j=0; j<size2;j++){
                    i=j;
                   
                   sum = 0;
                     count=0;
                       while(count<k){
                         
                        sum += arr[i];
                             
                            i++; count++;
                       }
                       max[j] = sum;
                       
              }
              int maxo = maximum(max,size2);
              cout<<maxo<<endl;
              
      } 
        return 0;
 }
