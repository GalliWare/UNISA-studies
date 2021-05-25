def compute():
    global x
    print("Value of x in compute function is %d" % x)
    x += 5
    return None


def displayvalue():
    global x
    print("Value of x in displayvalue function is %d" % x)
    x -= 2
    return None


x = 0
compute()
displayvalue()
compute()
