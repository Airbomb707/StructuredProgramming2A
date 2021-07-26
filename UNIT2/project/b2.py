import sys

if __name__ == "__main__":
    Mul3=[]
    Mul5=[]

    print ("Input your initial number")
    start=int(input())
    print ("Input your endpoint number")
    end=int(input())

    for i in range(start, end+1):
        if(i%3==0 and i%5==0):
            Mul3.append(i)
            Mul5.append(i)

        elif(i%3==0):
            Mul3.append(i)
            
        elif(i%5==0):
            Mul5.append(i)
    print("Numbers from", start, " to", end, "divisible by 3 are:", Mul3)
    print("Numbers from", start, " to", end, "divisible by 5 are:", Mul5)