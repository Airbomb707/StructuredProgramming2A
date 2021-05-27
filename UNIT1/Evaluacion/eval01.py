#Evaluation - Question 6

b=0
h=0
a=0

b=float(input("What's the base length? \n > "))
h=float(input("What's the height of the rectangle? \n > "))
a=(b*h)

if(b==h):
    print("The shape is a square, the area is: ",a)
else:
    print("The area is: ",a)
