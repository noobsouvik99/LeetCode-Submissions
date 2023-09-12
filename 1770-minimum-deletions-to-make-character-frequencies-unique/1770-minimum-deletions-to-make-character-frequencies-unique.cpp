class Solution {
public:
    int minDeletions(string s) {
        // There are 26 lowercase letters, each element in frequencies
        // stores the frequency of a character
        vector<int> frequencies(26);
        for (char ch: s) frequencies[ch - 'a'] += 1;
        
        // Sort frequencies in reverse order
        sort(frequencies.rbegin(), frequencies.rend());
        
        int total_deletions = 0;
        int next_unused_freq = s.length();
        for (int freq: frequencies) {
            // We cannot add characters, so the frequency cannot be higher
            next_unused_freq = min(next_unused_freq, freq);
            total_deletions += freq - next_unused_freq;
            
            // We cannot have another character with this frequency,
            // so decrement next_unused_freq
            if (next_unused_freq > 0) {
                next_unused_freq -= 1;
            }
        }
        return total_deletions;
    }
};