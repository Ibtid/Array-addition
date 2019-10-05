#include<stdio.h>
int main()
{
    int m1,n1,i,j,m2,n2;
    int ara[100][100];
    int ara2[100][100];
    int ara3[100][100];
    printf("Enter dimension of first matrix:");
    scanf("%d %d",&m1,&n1);
    printf("\n");
    printf("Enter dimension of second matrix:");
    scanf("%d %d",&m2,&n2);
    if(m1==m2&&n1==n2)
    {
        printf("Enter the values of first matrix:\n");
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n1; j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        printf("Enter the values of second matrix:\n");
        for(i=0; i<m2; i++)
        {
            for(j=0; j<n2; j++)
            {
                scanf("%d",&ara2[i][j]);
            }
        }
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n2; j++)
            {
                ara3[i][j]=ara[i][j]+ara2[i][j];
            }
        }
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n2; j++)
            {
                printf("%d\t",ara3[i][j]);
            }
            printf("\n");
        }
    }
    else if(m1!=m2||n1!=n2)
    {
        printf("The programme can not be done");
    }
}




