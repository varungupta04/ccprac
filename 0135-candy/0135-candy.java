import java.util.Arrays;

class Solution {
    public int candy(int[] ratings) {
        int n = ratings.length;
        int[] count = new int[n];
        Arrays.fill(count, 1);
        
        // First comparing with only left neighbor
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                count[i] = Math.max(count[i], count[i - 1] + 1);
            }
        }
        
        // Then comparing with only right neighbor
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                count[i] = Math.max(count[i], count[i + 1] + 1);
            }
        }
        
        int result = 0;
        for (int candies : count) {
            result += candies;
        }
        
        return result;
    }
}