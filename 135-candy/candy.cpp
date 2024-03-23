#include <vector>

class Solution {
public:
    int candy(std::vector<int>& ratings) {
        int l = ratings.size();
        int* arr = new int[l]; 
        
        for(int i = 0; i < l; i++) {
            arr[i] = 1;
        }

        for(int i = 1; i < l; i++) {
            if(ratings[i] > ratings[i - 1]) {
                arr[i] = arr[i - 1] + 1;
            }
        }

        for(int i = l - 2; i >= 0; i--) {
            if(ratings[i] > ratings[i + 1] && arr[i] <= arr[i + 1]) {
                arr[i] = arr[i + 1] + 1;
            }
        }

        int sum = 0;
        for(int i = 0; i < l; i++) {
            sum += arr[i];
        }

        delete[] arr;

        return sum;
    }
};
