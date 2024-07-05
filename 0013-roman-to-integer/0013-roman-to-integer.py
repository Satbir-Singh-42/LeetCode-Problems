class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_to_int = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        a = 0
        prev_value = 0
        
        for i in s:
            current_value = roman_to_int[i]
            if current_value > prev_value:
                # Subtract the previously added smaller value and add the correct value
                a += current_value - 2 * prev_value
            else:
                a += current_value
            prev_value = current_value
        
        return a
