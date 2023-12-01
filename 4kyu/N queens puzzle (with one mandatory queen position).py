def queens(position, size):
    result = [None] * size
    cols = set()
    hill_diagonals = set()
    dale_diagonals = set()

    # Converting 2D coordinates to 1D
    queen_position = (ord(position[0]) - 97, size - 1 if position[1] == '0' else int(position[1]) - 1)
    result[queen_position[1]] = queen_position[0]
    cols.add(queen_position[0])
    hill_diagonals.add(queen_position[1] - queen_position[0])
    dale_diagonals.add(queen_position[1] + queen_position[0])

    def place_queen(row, n):
        if result[row] is not None:
            return place_queen(row+1, n) if row+1 < n else True

        for col in range(n):
            if col in cols or \
                row - col in hill_diagonals or \
                row + col in dale_diagonals:
                continue
            
            result[row] = col
            cols.add(col)
            hill_diagonals.add(row - col)
            dale_diagonals.add(row + col)

            if row + 1 == n:
                return True
            if place_queen(row + 1, n):
                return True
            
            result[row] = None
            cols.remove(col)
            hill_diagonals.remove(row - col)
            dale_diagonals.remove(row + col)

        return False

    def place_queens(n):
        for row in range(n):
            if place_queen(row, n):
                return True
        return False

    if not place_queens(size):
        return ""
    if size == 10:
        return ",".join([f"{chr(i + 97)}{'0' if idx+1 == size else str(idx + 1)}" for idx, i in enumerate(result)])
    else:
        return ",".join([f"{chr(i + 97)}{size if idx+1 == size else idx + 1}" for idx, i in enumerate(result)])
