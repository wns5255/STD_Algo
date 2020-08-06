import sys

n, m = map(int, sys.stdin.readline().split())

result = sum(map(lambda x: int(x) + 1, sys.stdin.readline().split()))
tmp = max(0, (m - result) / (n+1))
if not bool(tmp):
    output = max(0, m - result)
else:
    output = sum(map(lambda x: x*x, range(1, int(tmp))))
    tmp2 = m - result - int(tmp) * (n+1)
    output += tmp2 * pow((int(tmp)+1),2)
print(output)