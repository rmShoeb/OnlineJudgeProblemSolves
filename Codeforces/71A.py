n = int(input())

for i in range(n):
	string = input()
	length = len(string)
	if length>10:
		print(string[0] + str(length-2) + string[length-1])
	else:
		print(string)
