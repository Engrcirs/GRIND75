class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        s_freq = {}
        t_freq = {}
        for char in s:
            s_freq[char] = s_freq.get(char, 0) +1
        for char in t:
            t_freq[char] = t_freq.get(char, 0) + 1
        return s_freq == t_freq