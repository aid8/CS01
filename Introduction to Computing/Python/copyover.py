n = [0, 48, 32, 0, 72, 0, 46, 32, 0, 52]
m = []
for i in range(len(n)):
    if n[i] != 0:
        m.append(n[i])
print(*m)