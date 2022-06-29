# 18268
import sys
from collections import deque
v = deque()
for i in range(int(sys.stdin.readline().rstrip())):
    data = list(sys.stdin.readline().split())
    if data[0] == 'push':
        v.append(data[1])
    elif data[0] == 'pop':
        if v:
            print(v[0])
            v.popleft()
        else:
            print(-1)
    elif data[0] == 'size':
        print(len(v))
    elif data[0] == 'empty':
        print(0) if v else print(1)
    elif data[0] == 'front':
        print(v[0]) if v else print(-1)
    else:
        print(v[-1]) if v else print(-1)