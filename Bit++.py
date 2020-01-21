

def sol(n):
    x = 0
    for statement in range(n):
        exp = input()
        if exp.find('++') != -1:
            x += 1
        else:
            x -= 1
    return x


if __name__ == "__main__":
    n = int(input())
    print(sol(n))
