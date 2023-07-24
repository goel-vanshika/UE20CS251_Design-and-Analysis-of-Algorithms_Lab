
#include <stdio.h>
 
int binomialCoeff(int n, int k)
{
	 if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
 
    // Recur
    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}
 
int main()
{
    int n , k ;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    printf("enter the value of k:\n");
    scanf("%d",&k);
    int val = binomialCoeff(n, k);
    printf("Value of C(%d, %d) is %d\n", n, k,val);
    return 0;
}