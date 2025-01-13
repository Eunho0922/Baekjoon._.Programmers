import math

a, b = input().split()

num1 = int(a)
num2 = int(b)

high_num = math.lcm(num1, num2)

print(high_num)