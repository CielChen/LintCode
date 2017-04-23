/*-----------------------------------------------------------------------------------------
Author: Ciel
Date: 2017.04.23
算法描述：选择排序
比如在一个长度为N的无序数组中，在第一趟遍历N个数据，找出其中最小的数值与第一个元素交换，
第二趟遍历剩下的N-1个数据，找出其中最小的数值与第二个元素交换......
第N-1趟遍历剩下的2个数据，找出其中最小的数值与第N-1个元素交换，
至此选择排序完成。
-----------------------------------------------------------------------------------------*/
class Solution {
public:
	/**
	* @param A an integer array
	* @return void
	*/
	void sortIntegers(vector<int>& A) {
		// Write your code here
		for (int i = 0; i<A.size(); i++)
		{
			int minCurrent = A[i];
			int pos;
			bool flag = false;
			for (int j = i + 1; j<A.size(); j++)
			{
				//记录最小元素的值和位置
				if (A[j]<minCurrent)
				{
					minCurrent = A[j];
					pos = j;
					flag = true;
				}
			}

			if (flag == true)
			{//将最小值置于A[i]
				int temp = A[i];
				A[i] = minCurrent;
				A[pos] = temp;
			}
		}
	}
};