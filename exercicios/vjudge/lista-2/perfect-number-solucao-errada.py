nums = []
total = 0
for num in range(19, 10_000):
  for letter in str(num):
    total += int(letter)
  if total == 10:
    nums.append(num)
  total = 0

print(nums)

def binary_serach(num: int, list: list[int], n: int, carry=0) -> int:
  if n == 1:
    if num != list[n - 1]:
      return (n - 1) + carry # retorna o elemento mais proximo de num
    return n # retorna o proprio num, caso exista
  middle = int(((n / 2) - 0.5) if n % 2 == 1 else (n / 2))
  if num < list[middle + carry]:
    return binary_serach(num, list, n - middle, carry)
  elif num > list[middle + carry]:
    carry += middle
    return binary_serach(num, list, n - middle, carry)
  return middle + carry # retorna o elemento caso exista

K = int(input())
print(nums[binary_serach(K, nums, len(nums))])