#include <stdio.h>
void hanoi( int disks,char srcRod, char tempRod, char destRod)
{
    if(disks==1)
    {
        printf("Move disk - %d from pole %c to %c\n",disks, srcRod, destRod);
    }
    else
    {
        hanoi(disks-1, srcRod, destRod,tempRod);
        printf("Move disk - %d from pole %c to %c\n",disks, srcRod, destRod);
        hanoi(disks-1, tempRod, srcRod, destRod);
    }
}
void main() 
{
    int n;
    printf("Enter number of disks : ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
}