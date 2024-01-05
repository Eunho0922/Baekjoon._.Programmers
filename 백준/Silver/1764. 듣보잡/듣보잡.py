l = []
input_list = []
count = 0
N, M = map(int, (input().split()))


for _ in range(N):
    l.append(input())
for _ in range(M):
    input_list.append(input())
intersection = list(set(l) & set(input_list))
l = list(intersection)
l.sort()
print(len(intersection))
for i in l:
    print(i)