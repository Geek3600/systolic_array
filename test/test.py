import numpy as np
MatrixA = np.arange(1,65, dtype=np.uint8).reshape(8,8)
#  print(MatrixA)
a = [1,2,3]
def arraytohex(array):
    a = [hex(x) for x in array]
    a.reverse()
    return a
        
#  for row in MatrixA:
    #  print(arraytohex(row))

#  with open("test_matrix_8_8.data", 'r') as file:
    #  lines = file.readlines()
    #  for line in lines:
        #  print(line)

with open("example.data", 'w') as file:
    for row in MatrixA:
        row =  row[::-1]
        for num in row:
            file.write("{:02x}".format(num))
        file.write("\n")

with open("example.data", 'r') as file:
    lines = file.readlines()
    for line in lines:
        pass
        #  print(hex(int(line)))

print(hex(int("080907")))
