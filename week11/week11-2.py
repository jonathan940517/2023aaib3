from collections import Counter

nums = [1,1,1,2,3]
counter = Counter()
for num in nums:
  counter[num] += 1
print(counter)