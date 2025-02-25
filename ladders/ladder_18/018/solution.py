[m, n] = map(int, input().split(" "))

ans = 0
for i in range(1, m + 1):
    ans += ((i / m) ** n - ((i - 1) / m) ** n) * i
print(ans)
