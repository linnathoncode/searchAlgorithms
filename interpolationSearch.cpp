#include <iostream>

using namespace std;

// Initialise index = low + (Key-arr[low])*(high-low)/(arr[high]-arr[low])
int initFormula(int arr[], int left, int right, int x)
{
	int index = left + (x - arr[left]) * (right - left) / (arr[right] - arr[left]);
	cout<<"inter formula: "<< index<<endl;
	return index;
}


int interSearch(int arr[], int left, int right, int x)
{
	if(left <= right)
	{
		int index = initFormula(arr, left, right, x);
		if(x == arr[index]) return index;
		else if(x < arr[index])
			interSearch(arr, left, index - 1, x);
		else
			interSearch(arr, index + 1 , right, x);
	}
	else return -1;
}



int main()
{
	int arr[] = {1,3,4,5,6,7,8,9,10,12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = n - 1;
	int x = 10;
	int index = interSearch(arr, left, right, x);
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
