/*----------------------------------
Author: Ciel
Date: 2017.04.23
�㷨������ð������
ԭ�����ٽ��������������бȽ�,���մ�С������ߴӴ�С��˳����н���,����һ�˹�ȥ��,������С�����ֱ������������һλ,
Ȼ���ٴ�ͷ��ʼ���������ȽϽ���,ֱ�������ڶ�λʱ����
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
			//��i������
			for (int j = 0; j<A.size() - 1 - i; j++)
			{
				if (A[j]>A[j + 1])
				{
					//int temp=A[j];
                    //A[j]=A[j+1];
                    //A[j+1]=temp;
                    
                    swap(A[j],A[j+1]);  //ֱ�ӵ���algorithm.h��ʵ�ֽ��� 
				}
			}
		}
	}
};
