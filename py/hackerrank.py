if __name__ == '__main__':
    n = int(input('hi'))
    i = 0
    sum = 0

    for i in range(n):
        sum += i
        i *= i

        print(i)
