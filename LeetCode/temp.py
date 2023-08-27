# def minExtraCharacters(s, dictionary):
#     n = len(s)
#     dp = [float('inf')] * (n + 1)
#     dp[0] = 0

#     for i in range(1, n + 1):
#         for j in range(i):
#             if s[j:i] in dictionary:
#                 dp[i] = min(dp[i], dp[j] + (i - j))

#     return dp[n] - n

# s = "applepie"
# dictionary = ["apple", "pie"]
# print(minExtraCharacters(s, dictionary)) 
print(bin(5**6))
print((2**15)-1)