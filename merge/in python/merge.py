def main():
    a = [1, 4, 6]
    b = [2, 3, 5, 7]
    c = []

    print("a = {}, b = {}, c = {}".format(a, b, c))

    merge(a, b, c)

    print("c = {}".format(c))


def merge(a, b, z):
    pa, pb, pc = 0 ,0 ,0
    while(pa < len(a) and pb < len(b)):
        if a[pa] < b[pb]:
            z.append(a[pa])
            pa += 1
        else:
            z.append(b[pb])
            pb += 1

    if pa == len(a):
        z += a[pa:]
    else:
        z += b[pb:]

main()

