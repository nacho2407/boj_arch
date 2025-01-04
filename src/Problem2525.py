hour, minute = map(int, input().split())
minute += int(input())

hour += int(minute / 60)
minute %= 60
hour %= 24

print(hour, minute)
