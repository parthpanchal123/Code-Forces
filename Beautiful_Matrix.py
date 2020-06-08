

def sol():
    x, y = 3, 3
    for i in range(1, 6):
        s = input().split(" ")
        if "1" in s:
            row = i
            column = s.index('1')+1
            break

    return abs(row-x) + abs(column-y)


if __name__ == "__main__":
    print(sol())
