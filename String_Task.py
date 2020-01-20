

def sol(s):
    vowels = ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', 'Y', 'y')
    temp = ''
    for c in s:
        if c not in vowels:
            if c.isupper():
                c = c.lower()
            c = '.' + c
        temp += c

    for c in temp:
        if c in vowels:
            temp = temp.replace(c, '')

    print(temp)


if __name__ == "__main__":
    s = str(input())
    sol(s)
