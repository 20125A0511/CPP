// C++ program to print Lower
// triangular and Upper triangular
// matrix of an array
#include<iostream>

using namespace std;

// Function to form
// lower triangular matrix
void lower(int matrix[10][10], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i < j)
			{
				cout << "0" << " ";
			}
			else
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Function to form upper triangular matrix
void upper(int matrix[10][10], int row, int col)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i > j)
			{
				cout << "0" << " ";
			}
			else
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
	int matrix[10][10],row,col,j,i;
	cout<<"\n Enter Rows for Array (Max 10) : ";
cin>>row;
cout<<"\n Enter Columns for Array (Max 10) : ";
cin>>col;
cout<<"\n Enter "<<row<<"*"<<col<<" Array Elements : \n";
for(i=0; i<row; i++)
{
for(j=0; j<col; j++)
{
cout<<" ";
cin>>matrix[i][j];
}
}

	cout << "Lower triangular matrix: \n";
	lower(matrix, row, col);

	cout << "Upper triangular matrix: \n";
	upper(matrix, row, col);

	return 0;
}
