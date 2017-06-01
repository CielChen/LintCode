```
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/happy-number
@Language: Markdown
@Datetime: 17-06-01 14:06
```

**核心：一个不是【快乐数】的数字在进行每个位置上的数字平方和计算时会得到4这个值.**

维基百科上关于快乐数的描述： https://en.wikipedia.org/wiki/Happy_number

发现快乐数有如下特征：
如果一个数“不快乐”，则它计算到后面必然陷入到这个循环里：4, 16, 37, 58, 89, 145, 42, 20, 4, ...