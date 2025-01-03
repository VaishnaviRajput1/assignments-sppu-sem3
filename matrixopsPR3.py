def input_matrix(rows,cols):
    matrix=[]
    for i in range(rows):
        rows=[]
        for j in range(cols):
            element=int(input(f"\nEnter element at row {1+1}, column{j+1} : "))
            rows.append(element)
        matrix.append(rows)
    return matrix

def print_matrix(matrix):
    for rows in matrix:
        for element in rows:
            print(element, end="\t")
            print()

def add_matrices(matrix1,matrix2):
    result=[[matrix1[i][j]+matrix2[i][j] for j in range(len(matrix1[0]))] for i in range(len(matrix1))]
    return result

def sub_matrixes(matrix1,matrix2):
    result=[[matrix1[i][j]-matrix2[i][j] for j in range(len(matrix1[0]))] for i in range(len(matrix1))]
    return result

def multiply_matrices(matrix1,matrix2):
    result=[[0 for z in range(len(matrix2[0]))] for z in range(len(matrix1))]
    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j]+=matrix1[i][k]*matrix2[j][k]
            return result

def transpose_matrix(matrix):
    result=[[matrix[j][i] for j in range(len(matrix[0]))] for i in range(len(matrix))]
    return result

rows=int(input("\nEnter number of rows:"))
cols=int(input("\nEnter number of columns:"))

print("\nEnter first matrix:")
matrix1=input_matrix(rows,cols)

print("\nEnter second matrix:")
matrix2=input_matrix(rows,cols)

print("\n Matrix 1:")
print_matrix(matrix1)

print("\n Matrix 2:")
print_matrix(matrix2)


c='y'
while c=='y':
    print("\n1.to add matrices")
    print("\n2.to subtract matrices")
    print("\n3.to multify")
    print("\n4.for transpose")
    print("\n5.exit")

    ch=int(input("\nEnter your choice:"))

    if ch==1:
        add_result=add_matrices(matrix1,matrix2)
        print("\n Result:")
        print_matrix(add_result)
    if ch==2:
        sub_result=sub_matrixes(matrix1,matrix2)
        print("\n Result:")
        print_matrix(sub_result)
    if ch==3:
        mul_result=multiply_matrices(matrix1,matrix2)
        print("\n Result:")
        print_matrix(mul_result)
    if ch==4:
        transpose_result1 = transpose_matrix(matrix1)
        transpose_result2 = transpose_matrix(matrix2)
        print("\nTranspose of Matrix 1:")
        print_matrix(transpose_result1)
        print("\nTranspose of Matrix 2:")
        print_matrix(transpose_result2)
    elif ch==5:
        print("Thank you for using this program:")
    else:
        print("INVALID CHOICE")

    






        
    