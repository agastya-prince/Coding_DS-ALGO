void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
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
