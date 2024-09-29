# O(log(n)), O(1)
def maxValue(n: int, index: int, maxSum: int) -> int:
    
    def calc(n: int, dist: int) -> int:
        m = n - dist if (n - dist) > 0 else 0
        return (n*(n+1)//2) - (m*(m+1)//2)

    res = 1
    l, r = 1, maxSum - n
    
    while (l <= r):
        mid = (l + r) // 2
        rsum = calc(mid - 1, n - (index + 1))
        lsum = calc(mid - 1, index)
        msum = mid + rsum + lsum
        if msum <= maxSum - n:
            res = mid + 1
            l = mid + 1
        else:
            r = mid - 1
    return res

def test_func1():
    assert maxValue(8, 7, 14) == 4
def test_func2():
    assert maxValue(4, 2, 6) == 2
def test_func3():
    assert maxValue(6, 1, 10) == 3