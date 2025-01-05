alpha = [0 for i in range(26) ]

str = input().upper()

for i in range(0, int(len(str))):
  alpha[ord(str[i]) - 65 ] += 1

m = max(alpha)
answer = [index + 1 for index, val in enumerate(alpha) if val == m]

if len(answer) == 1:
  print(chr((answer[0] - 1) + 65))
else:
  print('?')