/*----------------------------------
Author: Ciel
Date: 2017.04.23
算法描述：冒泡排序
原理是临近的数字两两进行比较,按照从小到大或者从大到小的顺序进行交换,这样一趟过去后,最大或最小的数字被交换到了最后一位,
然后再从头开始进行两两比较交换,直到倒数第二位时结束
*/
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
			//第i趟排序
			for (int j = 0; j<A.size() - 1 - i; j++)
			{
				if (A[j]>A[j + 1])
				{
					//int temp=A[j];
                    //A[j]=A[j+1];
                    //A[j+1]=temp;
                    
                    swap(A[j],A[j+1]);  //直接调用algorithm.h，实现交换 
				}
			}
		}
	}
};
