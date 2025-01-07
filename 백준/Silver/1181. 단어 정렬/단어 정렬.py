n = int(input())

arr = []

for i in range(0, n):
    str = input()
    arr.append(str)

set_list = set(arr)
arr = list(set_list)

arr.sort()
arr.sort(key=len)


for i in range(0, len(arr)):
    print(arr[i])