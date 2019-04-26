"""
두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 리턴하는 함수, solution을 완성하세요.
"""


def solution(a, b):
    if a > b:
        a, b = b, a
    return sum(range(a, b+1))


print(solution(-10, 5))