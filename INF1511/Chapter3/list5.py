months = ["January", "February", "March", "April", "May", "June",
          "July", "August", "September", "November", "December"]
n = int(input("Enter a value betwee 1 and 12: "))
if 1 <= n <= 12:
    print("The month is %s" % months[n+1])
else:
    print("%d is not between 1 and 12" % n)
