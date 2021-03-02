# example of using continue in a loop
k = 1
while k <= 10:
    if k == 7:
        k += 1
        continue
    print(k)
    k = k+1
