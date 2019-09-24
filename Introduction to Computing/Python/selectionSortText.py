s = list("sophisticated")

print(s)
for i in range(len(s)):
	sm = i
	for j in range(i,len(s)):
		if s[sm] > s[j]:
			sm = j
	s[i], s[sm] = s[sm], s[i]
	"".join(s)
	print(s)
