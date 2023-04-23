// remove duplicate elements from sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        

        set<int> s;
        for (int i=0; i<arr.size(); i++)
        {
            s.insert(arr[i]);
        }
        int p=0;
        for (auto it : s)
        {
            arr[p] = it;
            p++;
        }
        return p;

    }
};
