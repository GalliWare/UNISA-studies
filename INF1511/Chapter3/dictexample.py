student1 = {'John': 60, 'Kelly': 70, 'Caroline': 80}
student2 = dict([("David", 90), ('John', 55)])
print('The items in the dictionary student 1 are : {}' .format(student1.items()))
print('The keys in student1 dictionary are: {}'.format(student1.keys()))
print('The values in student1 dictionary are: {}'.format(student1.values()))
student1.update(student2)
print('student1 updated dictionary with student2 data: {}' .format(student1.items()))
n = input("Enter name of student who's marks you want to see: ")
if n in student1:
    print("The marks for {} are {}%".format(n, student1.get(n)))
else:
    print("No student {} in the dictionary student1.")
