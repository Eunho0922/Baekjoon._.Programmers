
import math

a, b = input().split()

num1 = int(a)
num2 = int(b)

low_num = math.gcd(num1, num2)
high_num = math.lcm(num1, num2)

print(low_num, high_num)