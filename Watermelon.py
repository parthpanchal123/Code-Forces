

def watermelon(n):
    if n % 2 == 0 and n != 2:
        return "YES"
    else:
        return "NO"


if __name__ == "__main__":
    n = int(input())
    print(watermelon(n))
