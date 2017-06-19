/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */
class Solution {
public:
    /**
     * @param intervals: interval list.
     * @return: A new interval list.
     */
    static bool comp(const Interval &a, const Interval &b) {
        return (a.start < b.start);
    }
    vector<Interval> merge(vector<Interval> &intervals) {
        // write your code here
        vector<Interval> res;
        if (intervals.empty()) 
            return res;
        sort(intervals.begin(), intervals.end(), comp);  //vector::end():当前vector末尾元素的下一位置的迭代器
        res.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); ++i) {
            if (res.back().end >= intervals[i].start) {   //vector::back():返回当前vector容器中末尾元素的引用
            
                res.back().end = max(res.back().end, intervals[i].end);
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};