nums = []
total = 0
for num in range(19, 11_000_000 , 9):
  for letter in str(num):
    total += int(letter)
  if total == 10:
    nums.append(num)
  total = 0
print(nums[int(input()) - 1])
