#include<stdio.h>
int main()
{
	int a[4][4];
	int i,j;
	printf("Enter values for the matrix: ");
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
		{
			printf("element [%d][%d] - ",i,j);
		scanf("%d",&a[i][j]);
		}
	printf("\nThe matrix is: \n");
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		printf("%d |",a[i][j]);
	    printf("\n");
    }
    
    printf("Sum of Diagonal Elements: ");
    printf("\nFrom left - %d",a[1][1]+a[2][2]+a[3][3]);
    printf("\nFrom Right - %d",a[1][3]+a[2][2]+a[3][1]);
	return 0;
}
