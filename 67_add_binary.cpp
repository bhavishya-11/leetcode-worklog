class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int indexA = a.size() - 1;  
        int indexB = b.size() - 1;  
        int carry = 0;              
      
        while (indexA >= 0 || indexB >= 0 || carry > 0) {
            if (indexA >= 0) {
                carry += a[indexA] - '0';  
                indexA--;
            }
          
            if (indexB >= 0) {
                carry += b[indexB] - '0';  
                indexB--;
            }
          
            result.push_back((carry % 2) + '0');  

            carry /= 2;
        }
      
        reverse(result.begin(), result.end());
      
        return result;
    }
};
