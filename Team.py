
def sol(n):
    count = 0
    for problem in range(n):
        results = list(map(int, input().split(" ")))
        if results.count(1) >= 2:
            count += 1
    return count


if __name__ == "__main__":
    n = int(input())
    print(sol(n))
