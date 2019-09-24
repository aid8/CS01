#13, 16, 19, 27, 31
n = int(input("Decimal: "))
bi = []
while n != 0:
	bi.append(int(n%2))
	n = int(n/2)
bi.reverse()
print("Binary:", *bi)
