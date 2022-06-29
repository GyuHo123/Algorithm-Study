from collections import deque
n = int(input())
v = deque([x for x in range(1, n+1)])
while len(v) != 1:
    v.popleft()
    v.append(v.popleft())
print(v[0])