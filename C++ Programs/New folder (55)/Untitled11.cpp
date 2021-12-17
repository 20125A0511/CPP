// C++ program to find all the triplets with the given sum

#include <bits/stdc++.h>
using namespace std;

void find_all_triplets(int arr[], int n, int sum)
{
for (int i = 0; i < n – 2; i++)
{
for (int j = i + 1; j < n – 1; j++)
{
for (int k = j + 1; k < n; k++)
{
if (arr[i] + arr[j] + arr[k] == sum)
{
cout << arr[i] << “,” << arr[j] << “,” << arr[k] <<endl;
}
}
}
}
}

int main()
{
int n, sum;
cout << “\nEnter the number of elements : “;
cin >> n;
int arr[n];
cout << “\nInput the array elements : “;
for(int i = 0; i < n; i++)
{
cin >> arr[i];
}
cout << “\nEnter the sum value : “;
cin >> sum;
cout << “\nThe triplets are \n “;
find_all_triplets(arr, n, sum);
return 0;
}
