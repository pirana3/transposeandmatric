import math
print('Please input 3 numbers')
def primeFactors(n):
	
	while n % 2 == 0:
		print(2),
		n = n / 2

	for i in range(3,int(math.sqrt(n))+1,2):
		
	
		while n % i== 0:
			print(i),
			n = n / i

	if n > 2:
		print(n)
def gcd(a, b):


	if (a == 0):
		return b
	if (b == 0):
		return a


	if (a == b):
		return a


	if (a > b):
		return gcd(a-b, b)
	return gcd(a, b-a)
def compute_lcm(x, y):


   if x > y:
       greater = x
   else:
       greater = y

   while(True):
       if((greater % x == 0) and (greater % y == 0)):
           lcm = greater
           break
       greater += 1

   return lcm
def any_base_to_decimal(number, base):
	temp = int(number, base)
	

	print(temp)
def substrings(n, x):
  if len(x) < n:
    return []

  return [x[:n]] + substrings(n, x[1:])
def substring(n, x):
  if len(x) < n:
    return []

  return [x[:n]] + substrings(n, x[1:])
n=int(input())
if n==1:
    a=int(input())
    b=int(input())
    primefactors(a)
    primefactors(b)
    print(gcd(a,b))
    print(lcm(a,b))
elif n==2:
    a=input()
    b=int(input())
    any_base_to_decimal(a,b)
elif n==3:
    a1=int(input())
    a2=int(input())
    a=[]
    for i in range(10):
        a.append(i)
    b=[]
    for i in range(65,91):
        b.append(chr(i))
    final=substrings(a1,a)
    final1=substring(a2,b)
    for i in range(len(final)):
        print(final[i]+final1[i])
else:
    print("exit")