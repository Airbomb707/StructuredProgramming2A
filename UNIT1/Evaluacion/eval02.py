#Evaluation - Question 7

#Empty array
#A length variable could be added for flexible user inputs
lst=[]

#Storing Values
for n in range(3):
    print("Enter value number ", n+1)
    num=int(input("> "))
    lst.append(num)

#Built-in Max() Function in Python
print("The largest number was: ", max(lst))
