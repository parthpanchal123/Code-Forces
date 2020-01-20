

def sol(n, k):
    scores = list(map(int, input().split(" ")))
    count = 0
    if scores[0] == 0:
        return 0
    else:
        target = scores[k-1]
        for score in scores:
            if score >= target and score > 0:
                count += 1
    return count


if __name__ == "__main__":
    n, k = map(int, input().split(" "))
    print(sol(n, k))
