n = [23,0,0,42,36,29,0,0,25,1]
legit = 10
left = 0
right = 9
tSh = 0
print("Left:",left,", Right:", right," Legit:",legit)
print(*n)
while left < right:
    if n[left] != 0:
        left += 1
    else:
        legit -= 1
        n[left] = n[right]
        right -= 1
        print("Copied: 1")
        tSh += 1
    print("Left:",left,", Right:", right," Legit:",legit)
    print(*n)
if n[left] == 0:
    legit -= 1
print("Legit:",legit,"\nSwap Count:",tSh)