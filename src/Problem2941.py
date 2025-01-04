arr = list(input())
count = 0
i = 0

while i < len(arr) :
    if i < len(arr) - 1 :
        if arr[i] == 'c' and arr[i + 1] == '=' or arr[i + 1] == '-' :
            i += 1
        elif arr[i] == 'd' :
            if i < len(arr) - 2 and arr[i + 1] == 'z' and arr[i + 2] == '=' :
                i += 2
            elif arr[i + 1] == '-' :
                i += 1
        elif (arr[i] == 'l' or arr[i] == 'n') and arr[i + 1] == 'j' :
            i += 1
        elif (arr[i] == 's' or arr[i] == 'z') and arr[i + 1] == '=' :
            i += 1
    i += 1
    count += 1

print(count)
