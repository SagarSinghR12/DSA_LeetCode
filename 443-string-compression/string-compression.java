class Solution {
    public int compress(char[] chars) {
        int i = 0;
        int j = 0;

        while(j < chars.length){
            char currChar = chars[j];
            int count = 0;

            while(j<chars.length && chars[j]==currChar){
                j++;
                count++;
            }

            chars[i++] = currChar;

            if(count > 1){
                String cnt = String.valueOf(count);
                for(char c : cnt.toCharArray())
                    chars[i++] = c;
            }
        }

        return i;
    }
}