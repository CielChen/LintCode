/*-----------------------------------------------------------------------------------------
Author: Ciel
Date: 2017.04.23
�㷨������ѡ������
������һ������ΪN�����������У��ڵ�һ�˱���N�����ݣ��ҳ�������С����ֵ���һ��Ԫ�ؽ�����
�ڶ��˱���ʣ�µ�N-1�����ݣ��ҳ�������С����ֵ��ڶ���Ԫ�ؽ���......
��N-1�˱���ʣ�µ�2�����ݣ��ҳ�������С����ֵ���N-1��Ԫ�ؽ�����
����ѡ��������ɡ�
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
				//��¼��СԪ�ص�ֵ��λ��
				if (A[j]<minCurrent)
				{
					minCurrent = A[j];
					pos = j;
					flag = true;
				}
			}

			if (flag == true)
			{//����Сֵ����A[i]
				int temp = A[i];
				A[i] = minCurrent;
				A[pos] = temp;
			}
		}
	}
};