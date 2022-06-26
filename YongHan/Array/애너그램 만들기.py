# 1919
v = list(input())
w = list(input())
result = 0
for i in range(len(v)):
    if v[i] in w:
        w.remove(v[i])
        v[i]=''
while '' in v:
    v.remove('')
print(len(v) + len(w))