
N = int(input())

arr = []
yn = True

for i in range(0, N):
  str = input()
  arr.append(str)

for i in range(0, len(arr[0])):
  for j in range(0, N - 1):
    if arr[j][i] != arr[j + 1][i]:
      yn = False
      break
  if yn == False:
    print("?", end='')
  else:
    print(arr[0][i], end='')
  yn = True
