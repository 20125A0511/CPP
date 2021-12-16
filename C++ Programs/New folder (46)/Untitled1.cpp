#include<bits/stdc++.h>
using namespace std;

// C++ program to sort an array

void show(int a[], int array_size)
{
	for (int i = 0; i < array_size; ++i)
		cout << a[i] << " ";
}

// Driver code
int main()
{
	int  a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2},sum;
	// size of the array
	int asize = sizeof(a) / sizeof(a[0]);
	cout << "The array before sorting is : \n";

	// print the array
	show(a, asize);

	// sort the array
	sort(a, a + asize);

	cout << "\n\nThe array after sorting is :";

	// print the array after sorting
	show(a, asize);

	sum=a[0]+a[8];
	cout<<"\n";
cout<<"Sum of Smallest and Largest Numbers in Array is: "<<sum<<endl;
	return 0;
}



