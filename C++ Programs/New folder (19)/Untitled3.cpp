#include<iostream>
using namespace std;
main()
{
int arr[10][10], rows, cols, i, j;
cout<<"\n Enter Rows for Array (Max 10) : ";
cin>>rows;
cout<<"\n Enter Columns for Array (Max 10) : ";
cin>>cols;
cout<<"\n Enter "<<rows<<"*"<<cols<<" Array Elements : \n";
for(i=0; i<rows; i++)
{
for(j=0; j<cols; j++)
{
cout<<" ";
cin>>arr[i][j];
}
}

}
