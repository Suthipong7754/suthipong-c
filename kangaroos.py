def kangaroo_jumps(k1, k2, k3):
    positions = [k1, k2, k3]
    positions.sort()
    max_jumps = 0
    for i in range(3):
        for j in range(i+1, 3):
            jumps = (positions[j] - positions[i]) // (j - i)
            if jumps > max_jumps:
                max_jumps = jumps
    return max_jumps

k1, k2, k3 = map(int, input().split())
print(kangaroo_jumps(k1, k2, k3))
