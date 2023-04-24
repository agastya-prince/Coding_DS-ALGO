void leftRotate(int arr[], int k, int n) 
	{ 
	   k = k%n;
	   int arr2[k];
	   for (int i=0; i<k; i++)
	   {
	       arr2[i] = arr[i];
	   }
	   for (int i=k;i <n; i++)
	   {
	       arr[i-k] = arr[i];
	   }
	   for (int i = n-k; i<n; i++)
	   {
	       arr[i] = arr2[i-(n-k)];
	   }
	} 
        //without using extra memory
void leftRotate(int arr[], int n, int d) 
{
        reverse(arr, arr+d);
        reverse(arr+d, arr+n);
        reverse(arr, arr+n);
}
