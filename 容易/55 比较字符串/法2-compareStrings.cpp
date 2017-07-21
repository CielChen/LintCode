class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
        //法2：哈希表：以字母为关键字，值是每个字母在字符串中出现的个数
        Map<String, Integer> map = new HashMap<String, Integer>();
        for (int i = 0; i < 26; i++) {  //初始化哈希表，各字母的个数为0
            map.put((char)(i + 'A') + "", 0);  //char后面加“”，相当于加/0，将char自动转为string
        }
        
        //统计A字符串中每个字母的个数
        for (int i = 0; i < A.length(); i++) {
            String key = A.charAt(i) + "";
            Integer count = map.get(key);
            map.put(key, ++count);
        }
        
        //以B字符串每个字母作为关键字，到哈希表中找对应的次数，并-1
        for (int i = 0; i < B.length(); i++) {
            String key = B.charAt(i) + "";
            Integer count = map.get(key);
            if (map.containsKey(key)) {
                map.put(key, --count);
            }
            if (count < 0) {
                return false;
            }
        }
        return true;
    }
};
