#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smal = arr[0];
    int sec_smal = INT16_MAX;
    for (int i=1; i<n; i++)
    {
        if (smal > arr[i])
        {
            sec_smal = smal;
            smal = arr[i];
        }
        else if (arr[i] > smal && arr[i] < sec_smal)
            sec_smal = arr[i];
        else
            continue;
    }
    cout<<"small = "<<smal<<" sec smal = "<<sec_smal<<endl;
    return 0;
}