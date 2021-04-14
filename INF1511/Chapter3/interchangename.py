n = input("Enter your first and last name: ")
k = n.partition(' ')
print("The name after interchanging first and last name is %s %s" %
      (k[2], k[0]))
