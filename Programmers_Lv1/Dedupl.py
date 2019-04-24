"""
배열 arr에서 연속적으로 나타나는 숫자는 하나만 남기고 전부 제거하려고 합니다.
배열 arr에서 제거 되고 남은 수들을 return 하는 solution 함수를 완성해 주세요.
"""

def solution(arr):
    answer = []
    answer.append(arr[0])
    pre = arr[0]
    for i in arr:
        if pre != i:
            answer.append(i)
        pre = i
    return answer
