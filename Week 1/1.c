#include<stdio.h>
#include <time.h>
int main()
{
	int n;
	printf("Enter size of square matrix: ");
	scanf("%d", &n);
	int a[n][n];
	
	struct timespec start,end;
	
	clock_gettime(CLOCK_REALTIME,&start);
	fillMatrix(n,a);
	clock_gettime(CLOCK_REALTIME,&end);
	
	printf("Time Taken: %lf", timeElapsed(start,end));
	displayMatrix(n,a);
}