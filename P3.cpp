/*Counting frequencies of array elements*/
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
        map<int,int> n;
        for(int i=0;i<N;i++){
            n[arr[i]]++;
            
        }
        for(int i=0,j=1;j<=N;i++,j++){
            arr[i]=n[j];
        }
    }
};
