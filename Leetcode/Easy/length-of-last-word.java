class Solution {
    public int lengthOfLastWord(String s) {
//         int lengthOfString = s.length();
//         int lastIndex = lengthOfString -1;
//         while(true){
//             if(s.charAt(lastIndex)==' '){
//             lastIndex--;
//             }
//             else{
//                 break;
//             }
            
//         }
//         int resultLength = 0;
//         while(true){
//             if(s.charAt(lastIndex)==' '){
//                 break;
//             }
//             else{
//                 resultLength++;
//             }
//         }
//         return resultLength;
        
        int length = 0;
        String s1 = s.trim();
        for(int i = 0; i<s1.length(); i++){
            if(s1.charAt(i)==' ') length = 0;
            else length++;
        }
        return length;
        
    }
}