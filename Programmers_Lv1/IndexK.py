"""
배열 array, [i, j, k]를 원소로 가진 2차원 배열 commands가 매개변수로 주어질 때,
commands의 모든 원소에 대해 앞서 설명한 연산을 적용했을 때 나온 결과를 배열에
담아 return 하도록 solution 함수를 작성해주세요.
"""


def solution(array, commands):
    answer = []
    for com in commands:
        sliced = array[com[0]-1:com[1]]
        sliced.sort()
        answer.append(sliced[com[2]-1])
    return answer


print(solution([1, 5, 2, 6, 3, 7, 4], [[2, 5, 3], [4, 4, 1], [1, 7, 3]]))
