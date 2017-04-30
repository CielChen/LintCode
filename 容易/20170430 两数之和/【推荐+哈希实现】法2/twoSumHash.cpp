class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        //哈希实现
        vector<int> result;
        map<int, int> m;  //map:实现了一对一的映射关系
        if (nums.size() < 2)
            return result;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = i;  //m存储的内容为<元素值，元素原始下标>
                             //即键值：vector的元素； 键值对应的值：该元素在vector中的序号

        map<int, int>::iterator it;
        for (int i = 0; i < nums.size(); i++) {
            if ((it = m.find(target - nums[i])) != m.end())
            {
                if (i == it->second) 
                    continue;
                result.push_back(i+1);
                result.push_back(it->second+1);
                return result;
            }
        }
        return result;
    }
};

