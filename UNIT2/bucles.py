from sys import argv

lst =  ["Red", "Black", "White", "Gray", "Green"]

lst2 =  [i   for i in range(1, 101) if i%2==0  ]
 
lstEvenOdd=[[i for i in range(1, 101) if i%2==0  ], [i for i in range(1, 101) if i%2!=0]]

print(lstEvenOdd)


if __name__ ==  "__main__":
        print(f'programName: {argv[0]}\n')
        print(lst, len(lst))
        index = 0
        while(index < len(lst)):
             print(f'index:{index}, value: {lst[index]}')
             index = index+1

        print("--------------------")

        for index in range(0,  len( lst) ):
                print( f'index:{index}, value: {lst[index]} ')