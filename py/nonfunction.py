panjang = int(input('Masukkan panjang deret: '))

a = 0
b = 4

for i in range(panjang):
    if (i < 2):
        print(i, end=' ')
    else:
        c = a + b

        # update 2 variabel bantuan
        a = b
        a = c
        print(c, end=' ')
