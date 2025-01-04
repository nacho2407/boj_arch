math = list(map(int, input().split()))
flag = 0

for i in range(-999, 1000) :
    for j in range(-999, 1000) :
        if math[0] * i + math[1] * j == math[2] and math[3] * i + math[4] * j == math[5] :
            print(i, j)
            flag = 1
            break
    if flag == 1 :
        break
