class Solution {
public:
    // 划分尽可能多的片段 => 贪心策略
    // 找到当前串中所有的字符最后出现的位置
    // 优化
    vector<int> partitionLabels(string s) {
       int last[26];
       int length = s.size();
       // 包含当前字符的 最后出现的位置 即最短的片段
       for (int i = 0; i < length; i++) {
           last[s[i] - 'a'] = i;
       } 
       vector<int> partition;
       int start = 0, end = 0;
       for (int i = 0; i < length; i++) {
           // 前面所有字符的最后出现位置
           end = max(end, last[s[i] - 'a']);
           if (i == end) {
                partition.push_back(end - start + 1);
                start = end + 1;
           }
       }

       return partition;
    }
};