""" dar uma estudada sobre isso aqui """
import sys
# nums = []
# for line in sys.stdin:
#   nums.append(list(map(int, line.strip().split())))
# print(nums)

# lists = []
# while(True):
#   try:
#     tmp = [int(num) for num in input().split()]
#     lists.append(tmp)
#   except EOFError:
#     break
# print(lists)

numbers = [[int(num) for num in x.strip().split()] for x in sys.stdin.readlines()]

print(numbers)

def cartesian(lists):
  if not lists:
    return [[]]
  rest_prod = cartesian(lists[1:])
  result = []
  for item in lists[0]:
    for suffix in rest_prod:
      result.append([item] + suffix)
  return result

print(cartesian(numbers))