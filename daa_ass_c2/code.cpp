#include <bits/stdc++.h>
using namespace std;

// Function to find the first or last occurrence of a given number in
// a sorted integer array. If `searchFirst` is true, return the
// first occurrence of the number; otherwise, return its last occurrence.
int search(int arr[], int N, int x, int flg)
{
    // search space is `A[low…high]`
    int low = 0, high = N - 1;
 
    // initialize the result by -1
    int result = -1;
 
    // loop till the search space is exhausted
    while (low <= high)
    {
        // find the mid-value in the search space and compares it with the target
        int mid = (low + high)/2;
 
        // if the target is found, update the result
        if (x == arr[mid])
        {
            result = mid;
 
            // go on searching towards the left (lower indices)
            if (flg) {
                high = mid - 1;
            }
            // go on searching towards the right (higher indices)
            else {
                low = mid + 1;
            }
        }
 
        // if the target is less than the middle element, discard the right half
        else if (x < arr[mid]) {
            high = mid - 1;
        }
        // if the target is more than the middle element, discard the left half
        else {
            low = mid + 1;
        }
    }
 
    // return the found index or -1 if the element is not found
    return result;
}

int main(void)
{	// We will save the array using random generator 
	int n;
	n = 1+ (rand() % 1000);
	int arr[n];
	arr[0]=(rand() % 10);
	for(int i=1;i<n;i++)
	{
		arr[i]=arr[i-1]+(rand() % 2);
	}
 	cout<<n<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cout<<arr[i]<<" ";
 	}
 	cout<<endl;

 	int x;
 	x=arr[rand() % n];
    // pass value 1 for the first occurrence
    int first = search(arr, n, x, 1);    
 
    if (first != -1) {
        // pass value 0 for the last occurrence
    int last = search(arr, n, x, 0);
 
    int count = last - first + 1;
    cout<<"Element "<<x<<" occurs "<<count<<" "<<"times";
    }
    else {
        cout<<"Element not found in the array.";
    }
 
    return 0;
}