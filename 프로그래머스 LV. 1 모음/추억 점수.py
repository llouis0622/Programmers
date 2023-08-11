def solution(name, yearning, photo):
    ans = []
    for people in photo:
        score = 0
        for num in people:
            if num in name:
                score += yearning[name.index(num)]
        ans.append(score)
        
    return ans