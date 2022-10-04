/*Chef is teaching a cooking course. There are NN students attending the course, numbered 11 through NN.

Before each lesson, Chef has to take attendance, i.e. call out the names of students one by one and mark which students are present. Each student has a first name and a last name. In order to save time, Chef wants to call out only the first names of students. However, whenever there are multiple students with the same first name, Chef has to call out the full names (both first and last names) of all these students. For each student that does not share the first name with any other student, Chef may still call out only this student's first name.

Help Chef decide, for each student, whether he will call out this student's full name or only the first name.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer NN.
NN lines follow. For each valid ii, the ii-th of the following NN lines contains two space-separated strings denoting the first and last name of student ii.
Output
For each test case, print NN lines. For each valid ii, the ii-th of these lines should describe how Chef calls out the ii-th student's name ― it should contain either the first name or the first and last name separated by a space.

Constraints
1 \le T \le 1001≤T≤100
2 \le N \le 1002≤N≤100
all first and last names contain only lowercase English letters
the lengths of all first and last names are between 11 and 1010 inclusive
Subtasks
Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
1
4
hasan jaddouh
farhod khakimiyon
kerim kochekov
hasan khateeb
hasan jaddouh
farhod
kerim
hasan khateeb*/




#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) 
    { int n; cin >> n; 
      int count[n];
      string last[n], first[n];
      
      for (int i = 0; i < n; i++) 
      {cin >> first[i] >> last[i]; 
       count [i] = 0;}
      
      for (int i = 0; i < n; i++) 
      { for (int j = i+1; j < n; j++) 
        { 
            if (first[i] == first [j]) {
                count [i] ++; count[j]++;}
        }
      }
      
      for (int i = 0; i < n; i++) 
      { 
          if (count[i] == 0) cout << first[i] << endl;
          else cout << first [i] <<" " << last[i] << endl;                  
       }
      
    }
	return 0;
}