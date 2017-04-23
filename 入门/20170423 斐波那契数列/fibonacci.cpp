/*----------------------------
Author: Ciel
Date: 2017.04.23
注意：采用递归会超时
--------------------------------*/
class Solution{
public:
	/**
	* @param n: an integer
	* @return an integer f(n)
	*/
	int fibonacci(int n) {
		// write your code here
		if (n == 1)
			return 0;
		else if (n == 2)
			return 1;
		else
		{
			//return fibonacci(n-1)+fibonacci(n-2);  //代码超时
			vector<int> array;
			array.push_back(0);
			array.push_back(1);
			for (int i = 2; i<n; i++)
				array.push_back(array[i - 1] + array[i - 2]);
			return array[n - 1];
		}

	}
};
