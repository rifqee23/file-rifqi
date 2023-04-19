panjang = int(input('Masukkan panjang deret: '))

a = 0
b = 1

for i in range(panjang):
    if (i < 2):
        print(i, end=' ')
    else:
        c = a + b
        print(c, end=' ')

        # update 2 variabel bantuan
        a = b
        b = c
