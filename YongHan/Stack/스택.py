# 10828
import sys
st = []
for i in range(int(sys.stdin.readline().rstrip())):
    command = list(sys.stdin.readline().split())
    if command[0] == 'push':
        st.append(int(command[1]))
    elif command[0] == 'pop':
        print(st.pop()) if len(st) > 0 else print(-1)
    elif command[0] == 'size':
        print(len(st))
    elif command[0] == 'empty':
        print(1) if len(st) == 0 else print(0)
    else:
        print(st[-1]) if len(st) > 0 else print(-1)