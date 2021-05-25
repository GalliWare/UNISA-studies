def volume1(l, b=5, h=10):
    print("Length is %d, breath is %d, height is %d and volume is %d" %
          (l, b, h, (l*b*h)))


volume1(2, 4)
volume1(3, h=6)
volume1(h=7, l=2)
