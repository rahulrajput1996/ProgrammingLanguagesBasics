row1 = int(input("enter row\n"))
column1 = int(input("enter column\n"))
row2 = int(input("enter row\n"))
column2 = int(input("enter column\n"))


def fun1(row1, column1):
    a = []
    for i in range(1, row1+1):
        b = []

        for j in range(1, column1+1):
            myvalue = int(input(f"value for matrix A {i} row {j} column"))
            b.append(myvalue)

        a.append(b)
    return a


def fun2(row2, column2):
    a = []
    for i in range(1, row2+1):
        b = []
        for j in range(1, column2+1):
            myvalue = int(input(f"value for matrix B {i} row {j} column"))
            b.append(myvalue)

        a.append(b)
    return a


matrix1 = fun1(row1, column1)
matrix2 = fun2(row2, column2)
print(matrix1)
print(matrix2)


def fun3(matrix1, matrix2):
    a = []
    for i in range(0, row1):
        b = []
        for j in range(0, column2):
            sum = 0

            for k in range(0, column1):

                multiply = matrix1[i][k]*matrix2[k][j]
                sum = sum+multiply

            b.append(sum)
        a.append(b)
    return a


multi = fun3(matrix1, matrix2)
print(multi)
