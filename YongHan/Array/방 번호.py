# 1475
n=list(input())
max_rep = 1
for i in range(0, len(n)-1):
    if int(n[i]) == 6 or int(n[i]) == 9:
        rep = 0.5
    else:
        rep = 1
    for j in range(i+1, len(n)):
        if int(n[i]) == 6 or int(n[i]) == 9:
            if int(n[j]) == 6 or int(n[j]) == 9:
                rep += 0.51
                continue
        if int(n[i]) == int(n[j]):
            rep += 1
    if max_rep < rep:
        max_rep = rep
print(int(round(max_rep)))
