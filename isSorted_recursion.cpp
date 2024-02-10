#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int n)
{
   // base case
    if(n==0 || n==1)
	  return true;
	if(arr[0] > arr[1])
	 return false;
	else
	    {
	    	bool remainingParts = isSorted(arr+1,n-1);
			 return remainingParts;
			  }	  
}

int main(){
	int arr[5] = {2,4,9,9,9};
	int size = 5;
	bool ans = isSorted(arr,size);
	
	if(ans)
	{
			cout<<"Array is sorted"<<endl;
	}
	else
	{
		cout<<"Array is not sorted"<<endl;
	}

}
