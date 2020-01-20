
from math import ceil


def sol(n, m, a):
    res = ceil(n/a) * ceil(m/a)
    return res


if __name__ == "__main__":
    n, m, a = map(int, input().split())
    print(sol(n, m, a))
