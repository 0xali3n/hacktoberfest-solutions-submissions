/*
QUESTION : 

Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space. 
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4  
Input Format : The input will contain a single integer n. 
Constrains :    1 <= n <= 100

CODE:

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",n-j);
        }
        for(int k=0; k<(2*n-1-2*i);k++){
            printf("%d ",n-i);
        }
        for(int l=i;l>0;l--){
            printf("%d ",n-l+1);
        }
        printf("\n");
    }
    for(int i=n-2; i>=0;i--){
        for(int j=0;j<i;j++){
            printf("%d ",n-j);
        }
        for(int k=0; k<(2*n-1-2*i);k++){
            printf("%d ",n-i);
        }
        for(int l=i;l>0;l--){
            printf("%d ",n-l+1);
        }
        printf("\n");
    }
    return 0;
}                                            
/*

Sample Input 1 : 5

Sample Output 1 :

                    5 5 5 5 5 5 5 5 5 
                    5 4 4 4 4 4 4 4 5 
                    5 4 3 3 3 3 3 4 5 
                    5 4 3 2 2 2 3 4 5 
                    5 4 3 2 1 2 3 4 5 
                    5 4 3 2 2 2 3 4 5 
                    5 4 3 3 3 3 3 4 5 
                    5 4 4 4 4 4 4 4 5 
                    5 5 5 5 5 5 5 5 5

////////////////////////////////////////////////////////

Sample Input 2 : 7

Sample Output 2 :

                    7 7 7 7 7 7 7 7 7 7 7 7 7 
                    7 6 6 6 6 6 6 6 6 6 6 6 7 
                    7 6 5 5 5 5 5 5 5 5 5 6 7 
                    7 6 5 4 4 4 4 4 4 4 5 6 7 
                    7 6 5 4 3 3 3 3 3 4 5 6 7 
                    7 6 5 4 3 2 2 2 3 4 5 6 7 
                    7 6 5 4 3 2 1 2 3 4 5 6 7 
                    7 6 5 4 3 2 2 2 3 4 5 6 7 
                    7 6 5 4 3 3 3 3 3 4 5 6 7 
                    7 6 5 4 4 4 4 4 4 4 5 6 7 
                    7 6 5 5 5 5 5 5 5 5 5 6 7 
                    7 6 6 6 6 6 6 6 6 6 6 6 7 
                    7 7 7 7 7 7 7 7 7 7 7 7 7 

*/