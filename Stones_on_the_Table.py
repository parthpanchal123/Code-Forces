

def sol(n):
    count = 0
    stones = input()
    if n == 1:
        return count
    for i in range(0, len(stones)-1):
        if stones[i] == stones[i+1]:
            count += 1
        else:
            continue
    return count


if __name__ == "__main__":
    n = int(input())
    print(sol(n))
