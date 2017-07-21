class Solution {
public:
    /**
     * @param key: A String you should hash
     * @param HASH_SIZE: An integer
     * @return an integer
     */
    int hashCode(string key,int HASH_SIZE) {
        // write your code here
        if(key.length()==0)
            return 0;
        
        long sum = (int)key[0];//sum * 33可能会超出int范围,所以要long
        for(int i = 1; i < key.length(); i++) {
            //sum+=(int)(key[i])*pow(33, length-1-i);   //注意：不能先求和，最后取余，会超时！！！！！
            sum = sum * 33 % HASH_SIZE + (int)key[i];  //及时求余，否则超出long范围
        }
        return (int)(sum % HASH_SIZE);
    }
};