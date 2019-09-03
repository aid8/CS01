n = [0, 48, 32, 0, 72, 0, 46, 32, 0, 52]
print(*n)
totalCountSh = 0
for i in range(len(n)):
    countSh = 0
    if n[i] == 0:
        for j in range(i, len(n)-1):
            n[j] = n[j+1]
            countSh += 1
        totalCountSh += countSh
    print(*n)
    print("Current Shuffle Count:", countSh)
print("Total Shuffle Count:", totalCountSh)