#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{	
	if(left <= right)
	{
		int mid = int((right + left) / 2);
		if(x == arr[mid]) return mid;
		else if(x < arr[mid])
			binarySearch(arr, left, mid - 1, x);
		else
			binarySearch(arr, mid + 1 , right, x);
	}
	else return -1;
		
}

int main()
{
	int arr[] = {1,3,4,5,6,7,8,9,10,12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = n - 1;
	int x = 12;
	int index = binarySearch(arr, left, right, x);
	if(index != -1)
	{
		cout<<arr[index]<<" is found at the "<<index<<". index in the array"<<endl;
	}
	else
	{
		cout<<"Element is not found in the array"<<endl;
	}
	
	return 0;
}
