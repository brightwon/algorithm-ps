def solution(n, words):
    prev = []
    user = 1
    turn = 1
    for i, v in enumerate(words):
        if i == 0:
            prev.append(v)
            user += 1
            continue
        if prev[-1][-1] != v[0] or v in prev or len(v) == 1:
            return [user, turn]
        if user % n == 0:
            turn += 1
            user = 1
        else:
            user += 1
        prev.append(v)
    return [0, 0]


print(solution(3, ["hello", "one", "even", "never", "now", "world", "draw"]))


# 다른 사람 풀이
def solution(n, words):
    for p in range(1, len(words)):
        if words[p][0] != words[p-1][-1] or words[p] in words[:p]: return [(p%n)+1, (p//n)+1]
    else:
        return [0,0]
