line = input()
half = len(line) // 2 + len(line) % 2
for x, y in zip(line[:half], line[-1:-half - 1:-1]):
    if x != y: break
else: print("Palindrome!")