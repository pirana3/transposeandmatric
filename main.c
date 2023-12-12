#include<stdio.h>
int main()
{
int a;

printf("Hello and Welcome\n");
printf("Please choose one of the following Matrix options\n");
printf("1. Sum, difference, and productn\n");
printf("2. Determinant\n");
printf("3. Traspose\n");
printf("4. Inverse\n");
printf("5. Exit\n");
scanf("%d", &a);
printf("Your answer is: %d");
if(a == 1)
{
printf("1\n");
int n,m,c,d,first[3][3],second[3][3],sum[3][3],diff[3][3],prod[3][3];
printf("Please Enter the number of rows and columns of the first matrix: ");
scanf("%d%d",&m,&n);
printf("Enter the %d elements of the first matrix: ",m*n);
for(c=0;c<m;c++)
for(d=0;d<n;d++);
scanf("%d",&first[c][d]);
printf("Enter the %d elements of the second matrix: ",m*n);
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&second[c][d]);
printf("Your First matrix is: ");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",first[c][d]);
}
printf("\n");
}
printf("second matrix is: ");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",second[c][d]);
}
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++)
sum[c][d]=first[c][d]+second[c][d];
printf("sum of two entered matrices is: ");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",sum[c][d]);
}
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++)
diff[c][d]=first[c][d]-second[c][d];
printf("difference of two entered matrices is: ");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",diff[c][d]);
}
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++)
prod[c][d]=first[c][d]*second[c][d];
printf("product of two entered matrices is: ");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",prod[c][d]);
}
printf("\n");
}
}
else if(a == 2)
{
printf("2\n");
int a[3][3],i,j;
long determinant;
printf("enter the 9 elements of a matrix:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("matrix is");
for(i=0;i<3;i++)
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
determinant=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
printf("\ndeterminant of matrix is: %d",determinant);
printf("\n");
}
else if(a == 3)
{
printf("3\n");
int a[3][3],transpose[3][3],r,c,j,i;
printf("enter rows and columns:");
scanf("%d",&r,&c);
printf("\nenter matrix elements:");
scanf("%d",&r,&c);
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("\nenter element a%d%d:",i+1,j+1);
}
}
printf("\nentered matrix:");
scanf("%d",&a[i][j]);
for(int i=0;i<r;i++)
for(j=0;j<c;j++)
{
printf("%d",a[i][j]);
if(j==c-1)
printf("\n");
}
for(int i=0;i<r;i++)
for(j=0;j<c;j++)
{
transpose[j][i]=a[i][j];
}
printf("transpose of the matrix:");
for(int i=0;i<c;i++)
for(int j=0;j<r;j++)
printf("%d",transpose[i][j]);
if(j==r-1)
{
printf("\n");
}
printf("\n");
}
else if(a == 4)
{
printf("4\n");
int a[3][3],i,j;
float determinant=0;
printf("enter the 9 elements of a matrix:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("matrix is");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d",a[i][j]);
}
for(i=0;i<3;i++)
determinant=determinant+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+1)%3]));
printf("\ninverse of matrix is:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%.2f\t",((a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3]-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/determinant));
printf("\n");
}
}
else
printf("5\n");
printf("Have a good day and Happy Holidays\n");
printf("Thank you for a Wonderful Semester hope to have you again!");
}