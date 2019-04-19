"""
두 수를 입력받아 두 수의 최대공약수와 최소공배수를 반환하는 함수 solution을 완성해 보세요.
"""


def solution(n, m):
    a, b = n, m
    while b is not 0:
        r = a % b
        a = b
        b = r

    answer = [a, (n * m) / a]
    return answer


print(solution(10, 8))
