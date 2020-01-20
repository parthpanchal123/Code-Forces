

def sol(n):
    words = []
    for i in range(0, n):
        words.append(str(input()))

    for i in range(0, n):
        curr_word = words[i]
        if (len(curr_word) > 10):
            short_word = curr_word[0] + \
                str(len(curr_word[1:len(curr_word)-1])) + curr_word[-1]
            words[i] = short_word
        else:
            pass

    for word in words:
        print(word)


if __name__ == "__main__":
    n = int(input())
    sol(n)
