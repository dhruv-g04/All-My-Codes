from collections import Counter

from itertools import permutations 
s=input()
ls=list(s) 
  
# Get all permutations of [1, 2, 3] 
perm = list(set(list(permutations(ls))))
print(len(perm))
  
# Print the obtained permutations 
ans=[]
for i in list(perm):
    s=""
    for j in i:
        s+=j
    ans.append(s)
# print(ans)
ans.sort()
for k in ans:
    print(k)


# def numofper(ls):
#     d=dict(Counter(ls))
#     count=d.values()
#     nper=0
#     nper=
# class Solution(object):
#    def nextPermutation(self, nums):
#       found = False
#       i = len(nums)-2
#       while i >=0:
#          if nums[i] < nums[i+1]:
#             found =True
#             break
#          i-=1
#       if not found:
#          nums.sort()
#       else:
#          m = self.findMaxIndex(i+1,nums,nums[i])
#          nums[i],nums[m] = nums[m],nums[i]
#          nums[i+1:] = nums[i+1:][::-1]
#       return nums
#    def findMaxIndex(self,index,a,curr):
#       ans = -1
#       index = 0
#       for i in range(index,len(a)):
#          if a[i]>curr:
#             if ans == -1:
#                ans = curr
#                index = i
#             else:
#                ans = min(ans,a[i])
#                index = i
#       return index
# ob1 = Solution()
# s=input()
# ls=list(s)
# te=[1,2]
# k=ob1.nextPermutation(te)
# print(k)
# print(ob1.nextPermutation(te))
# print(ob1.nextPermutation(te))
# ans=[]
# x=ls
# # while (x not in ans ):
# #    print(1)
# for i in range(0,5):
#    x=ob1.nextPermutation(ls)
#    ans.append(x)
# #    print(x)

# print(ans)
