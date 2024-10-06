/*C Programming code for Cricket Players (total runs, least rank,etc) Structures using Pointers*
//C Programming code for Getting details of a Student who took the highest marks.
//Read the number of students, read their information and display the details of the students: */

#include<stdio.h>
struct cricket_player
{
    char name[20];
    char nationality[20];
    int ranking;
    int total_runs;
    int no_of_wickets;
};
void readStructure(struct cricket_player *p,int n);
void displayStructure(struct cricket_player *p,int n);
void leastRank(struct cricket_player *p,int n);
void totalWickets(struct cricket_player *p,int n);
void runs(struct cricket_player *p,int n);
main()
{
    int n;
    struct cricket_player cp[1000];
    struct cricket_player *p;
    p=&cp;
    printf("Enter the number of players: ");
    scanf("%d",&n);
    readStructure(p,n);
    leastRank(p,n);
    totalWickets(p,n);
    runs(p,n);
}
void readStructure(struct cricket_player *p,int n)
{
    int i;
    for(i=0;i<n;i++) {
      printf("\nEnter Details of Player %d",i+1); 
      printf("\nEnter the Name: "); 
      scanf("%s",(p+i)->name);
printf("Enter the Nationality: ");
scanf("%s",(p+i)->nationality);
printf("Enter the Ranking: ");
scanf("%d",&(p+i)->ranking);
printf("Enter the Total Runs: ");
scanf("%d",&(p+i)->total_runs);
printf("Enter the Number of Wickets: ");
scanf("%d",&(p+i)->no_of_wickets);
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");
    }
}
void displayStructure(struct cricket_player *p,int n)
{
printf("\nName: %s",(p+n)->name);
printf("\nNationality: %s",(p+n)->nationality);
printf("\nRanking: %d",(p+n)->ranking);
printf("\nTotal Runs: %d",(p+n)->total_runs);
printf("\nNumber of Wickets: %d",(p+n)->no_of_wickets);
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");

}
void totalWickets(struct cricket_player *p,int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++) { sum+=(p+i)->no_of_wickets;
    }
    printf("\n\nTotal number of wickets = %d\n",sum);
}
void leastRank(struct cricket_player *p,int n)
{
    int i,k;
    int min=p->ranking;
    for(i=0;i<n;i++) { if((p+i)->ranking<min) { min=(p+i)->ranking;
            k=i;
        }
    }
    printf("\nDetails of player with least ranking:\n");
    displayStructure(p,k);
}
void runs(struct cricket_player *p,int n)
{
    int i;
    printf("Details of players with runs more than 5000:\n");
    for(i=0;i<n;i++) { if((p+i)->total_runs>5000)
           displayStructure(p,i);
    }
}


/* OUTPUT:
Enter the number of players: 5

Enter Details of Player 1
Enter the Name: Jimmy
Enter the Nationality: Usa
Enter the Ranking: 8
Enter the Total Runs: 5904
Enter the Number of Wickets: 23

+++++++++++++++++++++++++++++++++++++++++++++++++

Enter Details of Player 2
Enter the Name: Gyann
Enter the Nationality: India
Enter the Ranking: 8
Enter the Total Runs: 653
Enter the Number of Wickets: 43456

+++++++++++++++++++++++++++++++++++++++++++++++++

Enter Details of Player 3
Enter the Name: grthy
Enter the Nationality: 7657
Enter the Ranking: 767
Enter the Total Runs: 34555556
Enter the Number of Wickets: 324

+++++++++++++++++++++++++++++++++++++++++++++++++

Enter Details of Player 4
Enter the Name: gthjfg
Enter the Nationality: retqrt
Enter the Ranking: 3
Enter the Total Runs: 456543
Enter the Number of Wickets: 45

+++++++++++++++++++++++++++++++++++++++++++++++++

Enter Details of Player 5
Enter the Name: AnarDreams
Enter the Nationality: Habibi
Enter the Ranking: 1
Enter the Total Runs: 34563
Enter the Number of Wickets: 234567898765

+++++++++++++++++++++++++++++++++++++++++++++++++

Details of player with least ranking:

Name: AnarDreams
Nationality: Habibi
Ranking: 1
Total Runs: 34563
Number of Wickets: -1655302515
+++++++++++++++++++++++++++++++++++++++++++++++++


Total number of wickets = -1655258667
Details of players with runs more than 5000:

Name: Jimmy
Nationality: Usa
Ranking: 8
Total Runs: 5904
Number of Wickets: 23
+++++++++++++++++++++++++++++++++++++++++++++++++

Name: grthy
Nationality: 7657
Ranking: 767
Total Runs: 34555556
Number of Wickets: 324
+++++++++++++++++++++++++++++++++++++++++++++++++

Name: gthjfg
Nationality: retqrt
Ranking: 3
Total Runs: 456543
Number of Wickets: 45
+++++++++++++++++++++++++++++++++++++++++++++++++

Name: AnarDreams
Nationality: Habibi
Ranking: 1
Total Runs: 34563
Number of Wickets: -1655302515
+++++++++++++++++++++++++++++++++++++++++++++++++

Process returned 0 (0x0)   execution time : 447.635 s
Press any key to continue.
