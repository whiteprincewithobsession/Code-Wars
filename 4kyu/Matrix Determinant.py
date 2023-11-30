import numpy as np

def determinant(matrix):
    if len(matrix) == 1:
        return matrix[0][0]
    matr = np.array(matrix)
    det = np.linalg.det(matr)
    return round(det)