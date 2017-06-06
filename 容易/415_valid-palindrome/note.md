```
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/valid-palindrome
@Language: Markdown
@Datetime: 17-06-05 13:05
```

1.空字符串和只有一个字符的字符串直接返回true
2.对于不是字母和数字的判断
原来我的思路是将s中不是字母和数字的字符删去，但是这样需要额外遍历一次字符
而参考代码则有效规避了这个问题
3.tolower（）函数，直接转换为小写字母，不用自己再写了