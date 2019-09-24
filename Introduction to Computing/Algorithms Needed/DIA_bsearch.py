n = [1,2,3,4,5,6,7,8,9,10]
s = 6
l = 0
r = len(n)-1
found = "NO"

while found != "YES" and l <= r:
	m = int((l+r)/2);
	if n[m] == s:
		found = "YES"
	elif n[m] < s: l = m + 1
	else: r = m-1
if found == "YES":
	print(s, "found in index", m)
else:
	print(s, "not found")
