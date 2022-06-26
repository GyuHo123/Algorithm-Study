# 13300
import sys
input = sys.stdin.readline
n, k = map(int, input().split())
result = 0
girl_grade = [0] * 7
boy_grade = [0] * 7
for i in range(n):
    s, g = map(int, input().split())
    if s == 0:
        girl_grade[g] += 1
    else:
        boy_grade[g] += 1
for j in range(1, 7):
    if girl_grade[j] % k == 0:
        result += girl_grade[j]//k
    else:
        result += girl_grade[j]//k + 1
    if boy_grade[j] % k == 0:
        result += boy_grade[j]//k
    else:
        result += boy_grade[j]//k + 1
print(result)