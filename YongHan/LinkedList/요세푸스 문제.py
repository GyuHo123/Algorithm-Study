# 1158
from collections import deque
n, k = map(int, input().split())
a = deque()
result = []
for _ in range(1, n+1):
    a.append(_)
for j in range(n):
    for i in range(k-1):
        a.append(a.popleft())
    result.append(a.popleft())

print('<', end='')
for j in result:
    if j == result[-1]:
        print(j, end='')
    else:
        print(j, end='')
        print(', ', end='')
print('>')