# não entendi nem como faz para resolver
consts = input()
N, K = [int(cons) for cons in consts.split()]
if (K > N):
    raise Exception("Error")
nums = input()
nums_list = [int(num) for num in nums.split()[:N]]
min_number = min(nums_list[:K])
operations = 0
for num in nums_list[:K]:
    num = min_number
operations += 1
