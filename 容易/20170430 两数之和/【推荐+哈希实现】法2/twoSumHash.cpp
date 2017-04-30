class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        //��ϣʵ��
        vector<int> result;
        map<int, int> m;  //map:ʵ����һ��һ��ӳ���ϵ
        if (nums.size() < 2)
            return result;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = i;  //m�洢������Ϊ<Ԫ��ֵ��Ԫ��ԭʼ�±�>
                             //����ֵ��vector��Ԫ�أ� ��ֵ��Ӧ��ֵ����Ԫ����vector�е����

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

