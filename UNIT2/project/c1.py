import sys

tempF = [63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 
82, 64, 75 , 90, 64, -999, 99, 82, 95, 82]

def Conversion(temp):
    C=(temp-32)*(5/9)
    return C

if __name__ == "__main__":
    tempC=[]

    for i in range(0, len(tempF)):
        if (tempF[i]!= -999):
            tempC.append(Conversion(tempF[i]))
            
    print ("Below you will find the values of the temperatures in Celcius")
    print (tempC, '\n')
    print ("The maximum temperature recorded was", max(tempC))
    print ("The minimum temperature recorded was:", min(tempC))
    print ("The average value of the temperatures is:",(sum(tempC)/len(tempC)))