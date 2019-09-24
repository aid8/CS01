n = [0, 48, 32, 0, 72, 0, 46, 32, 0, 52]
legit = len(n)
ct = 0
print(*n)
for i in range(len(n)):
	c = 0
	if n[i] == 0:
		legit -= 1
		for j in range(i, len(n)-1):
			n[j] = n[j+1]
			c += 1
	ct += c
	print("Count here used:", c)
	print(*n)
print("Legit:",legit)
print("Total Count:", ct)
