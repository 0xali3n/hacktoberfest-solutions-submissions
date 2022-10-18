/*NN is an experienced internet user and that means he spends a lot of time on the social media. Once he found the following image on the Net, which asked him to compare the sizes of inner circles:


It turned out that the circles are equal. NN was very surprised by this fact, so he decided to create a similar picture himself.

He managed to calculate the number of outer circles 𝑛 and the radius of the inner circle 𝑟. NN thinks that, using this information, you can exactly determine the radius of the outer circles 𝑅 so that the inner circle touches all of the outer ones externally and each pair of neighboring outer circles also touches each other. While NN tried very hard to guess the required radius, he didn't manage to do that.

Help NN find the required radius for building the required picture.

Input
The first and the only line of the input file contains two numbers 𝑛 and 𝑟 (3≤𝑛≤100, 1≤𝑟≤100) — the number of the outer circles and the radius of the inner circle respectively.

Output
Output a single number 𝑅 — the radius of the outer circle required for building the required picture.

Your answer will be accepted if its relative or absolute error does not exceed 10−6.

Formally, if your answer is 𝑎 and the jury's answer is 𝑏. Your answer is accepted if and only when |𝑎−𝑏|𝑚𝑎𝑥(1,|𝑏|)≤10−6.

Examples
inputCopy
3 1
outputCopy
6.4641016
inputCopy
6 1
outputCopy
1.0000000
inputCopy
100 100
outputCopy
3.2429391
*/

#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;
int main()
{
 
    int n, r;
    cin >> n >> r;
    double theta = (PI*(n-2))/(2*n);
    double R = (r*cos(theta))/(1-cos(theta));
    printf("%.7f\n",R);
}