N, X = input().split()

# friends = [int(friend) for friend in input().split() if int(friend) >= (int(X) - 1 if int(friend) > 1 else int(X)) and int(friend) != int(X)]
another_friends = [int(friend) for friend in input().split()]
print(another_friends)
print(len(another_friends))
print(list(set(another_friends)))
print(len(list(set(another_friends))))
# print(len(set(friends)) + 1)