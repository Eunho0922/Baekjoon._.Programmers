a, b = input().split()
a = int(a)
b = int(b)

n = 1
k = 1

# 5, 2
for i in range(0, b): # 0 ~ 1
  n *= a - i
  k *= i + 1

print(int(n / k))