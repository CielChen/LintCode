/*--------------------------------------------------------------
Author: Ciel
Date: 2017.04.23
算法描述：直接插入排序
当插入第i(i≥1)个对象时,前面的V[0],V[1],…,V[i−1]已经排好序。
这时,用V[i]的排序码与V[i−1],V[i−2],…,V[0]的排序码顺序进行比较,找到插入位置即将V[i]插入,原来位置上的对象向后顺移。
--------------------------------------------------------------*/
class Solution {
public:
	/**
	* @param A an integer array
	* @return void
	*/
	void sortIntegers(vector<int>& A) {
		// Write your code here
		if (A.size() == 0)
			return;
		for (int i = 0; i<A.size(); i++)
		{
			//插入第i个数
			for (int j = 0; j<i; j++)
			{
				if (A[j]<A[i])
					continue;
				else
				{
					int temp = A[i];
					for (int k = i; k>j; k--)
						A[k] = A[k - 1];
					A[j] = temp;
				}
			}
		}
	}
};