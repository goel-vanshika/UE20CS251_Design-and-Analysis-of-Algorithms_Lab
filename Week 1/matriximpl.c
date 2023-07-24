void fillMatrix(int n, int a[n][n])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n;j++)
		{
			a[i][j]=rand();
		} 
	}
}
void displayMatrix(int n, int a[n][n])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n;j++)
		{
			printf("%d", a[i][j]);
		} 
		printf("\n");
	}
}
double timeElapsed(struct timespec start, struct timespec end)
{
	double t;
	t=end.tv_sec-start.tv_sec;
	t=t+(end.tv_nsec-start.tv_nsec)*0.000000001;
	
	return t;
}

