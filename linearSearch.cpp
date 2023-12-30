#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int x)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}


int main()
{
	int arr[] = {8, 3, 12, 5, 7, 1, 10, 4, 9, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 11;
	int index = linearSearch(arr, n, x);
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
