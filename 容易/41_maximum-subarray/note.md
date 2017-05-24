```
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/maximum-subarray
@Language: Markdown
@Datetime: 17-05-23 11:13
```

http://www.ithao123.cn/content-10416308.html
动态规划：
状态方程：
curSum[0] = nums[0]
curSum[i] = max{curSum[i-1] + nums[i], nums[i]}   (i>=1)