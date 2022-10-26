/*Problem
Chef has recently moved into an apartment. It takes 30 minutes for Chef to reach office from the apartment.

Chef left for the office X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer X.
Output Format
For each test case, output YES if Chef will reach on time, NO otherwise.

The output is case-insensitive. Thus, the strings YES, yes, yeS, and Yes are all considered the same.


Sample 1:
Input:
6
30
60
14
29
31
42
Output:
YES
YES
NO
NO
YES
YES
Explanation:
Test case 1: Chef leaves 3030 minutes before he is supposed to reach, so he will reach the office exactly on time since it takes 3030 minutes to commute.

Test case 2: Chef will reach 3030 minutes early.

Test case 3: Chef will reach 16 minutes late.*/

/*CODE*/

#include <stdio.h>
int main()
{
  int n,num,d;
  scanf("%d",&n);
  for(int i = 0;i<n;i++)
  {
    scanf("%d",&num);
    if(num>=30)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
  return 0;
}

