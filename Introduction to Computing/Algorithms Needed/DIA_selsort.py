num = [10,9,8,7,6,5]

print(num)
for i in range(len(num)):
	sm = i
	for j in range(i, len(num)):
		if num[sm] > num[j]:
			sm = j
	num[sm], num[i] = num[i], num[sm]
	print(num)
