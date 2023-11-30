def last_digit(lst):
    if not lst:
        return 1

    result = 1
    for num in reversed(lst):
        result = num ** (result if result < 4 else result % 4 + 4)

    return result % 10