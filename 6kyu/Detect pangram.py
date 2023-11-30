def is_pangram(s):
    s = s.lower()
    a = set()
    for i in range(len(s)):
        if s[i].isalpha():
            a.add(s[i])
    if len(a) == 26:
        return True
    else:
        return False