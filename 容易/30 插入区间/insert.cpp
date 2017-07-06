/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */
class Solution {
public:
    /**
     * Insert newInterval into intervals.
     * @param intervals: Sorted interval list.
     * @param newInterval: new interval.
     * @return: A new interval list.
     */
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // write your code here
        int len = intervals.size();
        vector<Interval> res;  //新的区间vector
        if (len == 0){  //原intervals为空，直接插入newInterval
            res.push_back(newInterval);
            return res;
        }

        int i;
        //先扫描走到新的interval应该插入的位置
        for ( i= 0; i < len; i++){
            if (intervals[i].end < newInterval.start){
                res.push_back(intervals[i]);
            }
            else  
                break;
        }
        //判断新区间的start
        if (i < len){
            newInterval.start = min(newInterval.start, intervals[i].start);
        }

        //检查后面是否冲突，一直到新的interval的end小于下一个interval的start，并判断新区间的end
        for (; i < len; i++){
            if (newInterval.end>=intervals[i].start){
                newInterval.end = max(newInterval.end, intervals[i].end);
            }
            else
                break;
         }
        //插入新区间
        res.push_back(newInterval);
        //插入其余的区间
        for (; i < len; i++){
            res.push_back(intervals[i]);
        }
        return res;
    }
};