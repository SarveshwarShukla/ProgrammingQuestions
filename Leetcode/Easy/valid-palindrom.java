class Solution {
    static boolean isAlphaNum(char c){
        if((c>=48 && c<=57) || (c>=65 && c<=90) || (c>=97 && c<=122)) return true;
        else return false;
    }
    static char lowerCase(char c){
        if(c>=65 && c<=90) return (char)(c+32);
        else return c;
    }
    
    public boolean isPalindrome(String s) {
//         s = s.replaceAll("[^a-zA-Z0-9]", "");
//         int start;
//         int end = s.length() -1;
//         for(start = 0; start<end; start++){
//             if(s.charAt(start)==s.charAt(end)){
//                 end--;
//             }
//             else{
//                 return false;
//             }
                
//         }
//         return true;
        
        StringBuffer s1 = new StringBuffer();
        for(char c : s.toCharArray()){
           if(isAlphaNum(c)){
                s1.append(lowerCase(c));
            }
        }
        String reversed;
        String s2 = s1.toString();
        reversed = s1.reverse().toString();
        if(s2.equals(reversed)){
            return true;
        }
        return false;
        
        
    }
}