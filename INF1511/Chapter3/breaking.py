s = 'education'
k = s.partition('cat')
print("The word %s is partitioned into three parts" % s)
print("The first part is %s separator is %s and the third part is %s" %
      (k[0], k[1], k[2]))
t = input("Enter a sentence: ")
print("The original sentence is %s" % t)
print("The sentence after replacing all the characters 'a' by '#' is : %s" %
      t.replace('a', '#'))
print("The sentence after replacing the first 3 characters 'a' by '#' is : %s" %
      t.replace('a', '#', 3))
u = t.split(' ')
print("The words in the entered sentence are %s" % u)
print("The words in the entered sentence are")
for i in range(0, len(u)):
    print(u[i])
u = t.split(' ', 1)
print("The sentence entered split into two parts: %s and %s" % (u[0], u[1]))
