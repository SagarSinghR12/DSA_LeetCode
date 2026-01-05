class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int[] freq = new int[2001];
        for(int i : arr){
            freq[i+1000]++;
        }

        boolean result[] = new boolean[1001];
        for(int f : freq){
            if(f > 0){
                if(result[f])
                    return false;
                result[f] = true;
            }
        }

        return true;
    }
}