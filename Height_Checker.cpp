#include <bits/stdc++.h>
using namespace std;



class Solution {
public:

    vector<int> countSort(vector<int>& inputArray)
    {
        int N = inputArray.size();
        int M = 0;
        for (int i = 0; i < N; i++)
            M = max(M, inputArray[i]);
        vector<int> countArray(M + 1, 0);
        for (int i = 0; i < N; i++)
            countArray[inputArray[i]]++;
        for (int i = 1; i <= M; i++)
            countArray[i] += countArray[i - 1];
        vector<int> outputArray(N);
        for (int i = N - 1; i >= 0; i--)
        {
            outputArray[countArray[inputArray[i]] - 1]
                = inputArray[i];
    
            countArray[inputArray[i]]--;
        }
        return outputArray;
    }

    int heightChecker(vector<int>& heights) {
        vector<int> arr = countSort(heights);
        int count = 0;
        for(int i = 0; i < heights.size(); i++) {
            if(arr[i] != heights[i]) count++;
        }
        return count;
    }
};