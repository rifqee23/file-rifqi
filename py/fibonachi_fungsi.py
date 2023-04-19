n = int(input('Masukkan panjang deret'))
a = 0
b = 1

for i in range(n):
    if (i < 2):
        print(i, end=' ')

    else:
        c = a + b
        print(c, end=' ')

        a = b
        a = c
