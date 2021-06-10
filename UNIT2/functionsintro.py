from sys import argv as ag

def addNumbers(number1, number2):
        print('StartProgram: addNumbers executed...\n')
        result = number1+number2
        return result

answer =  False

def isEven( aNumber  ):
        if( aNumber%2 == 0 ):
                return True
        else:
                return False
        
if __name__  == "__main__":
        n1 = int(input("Dame numero 1:\t"))
        n2 = int(input("Dame numero 2:\t"))

        print(f"La suma de dos numeros = {addNumbers(n1, n2)}")
        answer = isEven(addNumbers(n1, n2))

        if(isEven(addNumbers(n1, n2))):
                print(f'N1: "{n1}"  and N2: "{n2}"  are your lucky numbers!')
        else:
                print(f'N1: "{n1}" and N2: "{n2}" are NOT your lucky numbers!')
