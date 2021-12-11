class Solution {
public:
    int romanToInt(string s) {
        int number = 0, answer = 0;
        for(int i = s.size() - 1; ~i; i--){
            switch(s[i]){
                case 'I' : 
                    number = 1;
                    break;
                case 'V' : 
                    number = 5;
                    break;
                case 'X' : 
                    number = 10;
                    break;
                case 'L' : 
                    number = 50;
                    break;
                case 'C' : 
                    number = 100;
                    break;
                case 'D' : 
                    number = 500;
                    break;
                case 'M' : 
                    number = 1000;
                    break;
                
                    
            }
            if(4*number < answer){
                answer = answer - number;
            }
            else{
                answer = answer + number;
            }
        }
        
        return answer;
    }
};