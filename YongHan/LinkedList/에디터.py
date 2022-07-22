# 1406
import sys
s1 = list(sys.stdin.readline().rstrip())
s2 = []

for i in range(int(sys.stdin.readline())):
    command = list(sys.stdin.readline().split())
    if command[0] == 'L':
        if s1:
            s2.append(s1.pop())
    elif command[0] == 'D':
        if s2:
            s1.append(s2.pop())
    elif command[0] == 'B':
        if s1:
            s1.pop()
    else:
        s1.append(command[1])

s1.extend(reversed(s2))
print(''.join(s1))