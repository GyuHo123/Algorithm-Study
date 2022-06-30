# 10773
k=int(input())
v=[]
for i in range(k):
    t=int(input())
    v.append(t) if t != 0 else v.pop()
print(sum(v))