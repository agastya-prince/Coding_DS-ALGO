#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int larg = arr[0];
    int sec_larg = -1;
    
    for (int i=1; i<n; i++)
    {
        if (larg < arr[i])
        {
            sec_larg = larg;
            larg = arr[i];
        }
        else if (arr[i] < larg && arr[i] > sec_larg)
            sec_larg = arr[i];
        else
            continue;
    }
    cout<<"larg = "<<larg<<" sec larg = "<<sec_larg<<endl;
    return 0;
}
