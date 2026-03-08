class Solution {
    public String method1(String s) {
        String[] str = s.split("\\s+");
        StringBuilder sb = new StringBuilder();

        for(int i = str.length-1; i >= 0; i--){
            sb.append(str[i]);
            if(i != 0)
                sb.append(" ");
        }

        return sb.toString();
    }

    public String method2(String s) {
        StringBuilder sb = new StringBuilder();
        int i = s.length() - 1;

        while(i >= 0) {
            while(i>=0 && s.charAt(i)==' ')
                i--;
            
            if(i < 0)
                break;
            
            int j = i;

            while(i>=0 && s.charAt(i)!=' ')
                i--;

            sb.append(s.substring(i+1, j+1)).append(" ");
        }

        return sb.toString().trim();
    }

    public String reverseWords(String s) {
        s = s.trim();
        // String str = method1(s);
        String str = method2(s);
        return str;
    }
}