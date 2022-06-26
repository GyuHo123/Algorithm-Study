# 11328
for i in range(int(input())):
    v, w = input().split()
    v = sorted(list(v))
    w = sorted(list(w))
    print('Possible') if v==w else print('Impossible')
