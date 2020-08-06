import sys

n = int(sys.stdin.readline())
people_dict = [None] * (n+1)
for _ in range(n):
    people_dict[_+1] = [False, tuple(map(int, sys.stdin.readline().split()))[:-1]]

m = int(sys.stdin.readline())
ing = []
for i in list(map(int, sys.stdin.readline().split())):
    people_dict[i][0] = 1
    ing += people_dict[i][1]

ing = [n for n in list(dict.fromkeys(ing)) if not bool(people_dict[n][0])]

n_iter = 2
while len(ing) != 0:
    change = []
    tmp = []
    for i in ing:
        count = [_ for _ in people_dict[i][1] if not bool(people_dict[_][0])]
        if len(count) <= (len(people_dict[i][1])/2.):
            change.append(i)
            tmp += count
        else:
            tmp.append(i)

    for i in change:
        people_dict[i][0] = n_iter
        if i in tmp:
            tmp.remove(i)
    tmp = list(dict.fromkeys(tmp))
    if all(x in tmp for x in ing) and len(ing) == len(tmp):
        break

    ing = tmp
    n_iter += 1

print(*[-1 if not bool(x[0]) else x[0]-1 for x in people_dict[1:]])