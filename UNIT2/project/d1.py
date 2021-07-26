import sys

if __name__ == "__main__":
    Year=["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]

    for Month in range(0, 7):
        print("Month: ",Year[Month])
        
        if (Month==1):
            for Day in range(1,29):
                print("Day: ",Day)

        elif (Month%2==0):
            for Day in range(1,32):
                print("Day: ",Day)
                
        elif (Month%2!=0):
            for Day in range(1,31):
                print("Day: ",Day)


    for Month in range(7, len(Year)):
        print("Month: ",Year[Month])

        if (Month%2==0):
            for Day in range(1,31):
                print("Day: ",Day)
                
        
        elif (Month%2!=0):
            for Day in range(1,32):
                print("Day: ",Day)


