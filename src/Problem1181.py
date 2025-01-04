n = int(input())
s = set()

for i in range(n) :
    s.add(input())

l = list(s)
l.sort(key = lambda x : (len(x), x))

for i in range(len(l)):
    print(l[i])
