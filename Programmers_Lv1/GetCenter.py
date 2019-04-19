"""
단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요.
"""


def solution(s):
    if len(s) % 2 == 0:
        return s[int(len(s) / 2 - 1):int(len(s) / 2 + 1)]
    else:
        return s[int(len(s) / 2)]


print(solution("qwert"))
print(solution("aassdd"))
