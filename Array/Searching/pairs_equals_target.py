#QUESTION -> Given a list of integers, find all pairs that sum up to a target number

#SOLUTION-1
# l1=[1,2,3,0,6]
# target=3
# for i in range(0,len(l1)-1):
#     for j in range(i+1,len(l1)):
#         if l1[i]+l1[j]==target:
#             print(l1[i],",",l1[j])
#here the time complexity is O(n^2) because of 2 for loops



#SOLUTION-2
# Hash Set Method for Two-Sum Problem
def find_pairs(nums, target):
    seen = set()#2
    pairs = []#(2,4)

    for num in nums:
        complement = target - num #4,2
        if complement in seen:
            pairs.append((complement, num))
        seen.add(num)

    return pairs

# Example usage
numbers = [2, 4, 3, 7, 1, 5]
target = 6
print(find_pairs(numbers, target))
#here the time complexity is O(n) only.
