```
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/count-and-say
@Language: Markdown
@Datetime: 17-05-23 11:56
```

参考：http://blog.csdn.net/u012850192/article/details/51452115
从第一个位置开始判断，和后边的数字一样count++，否则就加入字符串temp，直到末尾数字的判断，最后返回res。

string::back()---返回字符串的最后一个位置。
参考：http://blog.csdn.net/cainv89/article/details/47842599