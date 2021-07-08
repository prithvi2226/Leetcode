#print("prithvi")

#class Solution:
#  def romanToInt(self, s: str) -> int:

s = 'MCMXCIV'

map = {'I': 1,
       'V': 5,
       'X': 10,
       'L': 50,
       'C': 100,
       'D': 500,
       'M': 1000}

ans = 0
n = len(s)

x = n-1

while(x >= 0):
    if(map[s[x]] < map[s[x-1]]):
        ans = ans - map[s[x]]
    else:
        ans = ans + map[s[x]]
    x = x - 1

print(ans)
