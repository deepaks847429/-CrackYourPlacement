class Solution {
public:
     int eraseOverlapIntervals(int[][] intervals) {
       Arrays.sort(intervals, (a, b) -> (a[0] - b[0]));
       int end = intervals[0][1];
       int result = 0;

       for(int i = 1; i < intervals.length; i++) {
           if(intervals[i][0] < end) {
               result++;
               end = Math.min(intervals[i][1], end);
           }

           else {
               end = intervals[i][1];
           }
       }
       return result;
   }
};