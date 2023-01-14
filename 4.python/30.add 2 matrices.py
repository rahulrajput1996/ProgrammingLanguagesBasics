row=int(input("enter row\n"))
column=int(input("enter column\n"))


def fun1(row,column):
    a=[]
    for i in range(1,row+1):
        b=[]
        
        for j in range(1,column+1):
            myvalue=int(input(f"value for matrix A {i} row {j} column"))
            b.append(myvalue)

        a.append(b)
    return a



def fun2(row,column):
    a=[]
    for i in range(1,row+1):
        b=[]
        
        for j in range(1,column+1):
            myvalue=int(input(f"value for matrix B {i} row {j} column"))
            b.append(myvalue)

        a.append(b)
    return a



matrix1=fun1(row,column)
matrix2=fun2(row,column)
print(matrix1)
print(matrix2)

def fun3(matrix1,matrix2):
    a=[]
    for i in range(0,row):
        b=[]
        for j in range(0,column):
            sum=matrix1[i][j]+matrix2[i][j]
            b.append(sum)
        a.append(b)
    return a


sum=fun3(matrix1,matrix2)
print(sum)